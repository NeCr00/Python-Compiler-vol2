
%{
#include <cstdio>
#include <iostream>
#include <string.h>
// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);


static const char* black   = "\033[0;30m";
static const char* red     = "\033[0;31m";
static const char* green   = "\033[0;32m";
static const char* yellow  = "\033[0;33m";
static const char* blue    = "\033[0;34m";
static const char* magenta = "\033[0;35m";
static const char* cyan    = "\033[0;36m";
static const char* white   = "\033[0;37m";
static const char* fg      = "\033[0;39m";

// --- variables ---

#define VARSIZE 255
#define VARNAMESIZE 255

typedef struct {
    char *name;
    double value;
} variable;

int var_used = 0;
variable var[VARSIZE];
double get_value(char *name);
int set_value(char *name, double value);

int it = 0;
%}

%union {
    int   int_value;
    char  *string;
}

%token TOK_INDENT TOK_DEDENT

%token <int_value> INTNUM TRUE FALSE 
%token <string> VAR STRING 
%token IF THEN ELSE PRINT ASSIGN FROM AS DOT INIT LAMBDA
%token TOK_EQ TOK_NE TOK_GE TOK_LE TOK_GT TOK_LT COMMA ELIF FOR DEF CLASS
%token TOK_PLUS TOK_MINUS TOK_MUL TOK_DIV TOK_L_P TOK_R_P IN RANGE IMPORT TOK_L_BRA TOK_R_BRA

%type <int_value> statements statement codeblock expr term factor cond  expr_list for_stmt assign_stm  
%type <string> target string
%%
program:
    //empty
    |statements;

statements
    : statements statement { $$ = it = $2; }
    | statement            { $$ = it = $1; }
    ;

statement
:
    expr_list              { $$ = $1; }
    |if_stmt                
    |print_stm
    | for_stmt              { $$ = $1; }
    | import_stmt      
    | classdef 
    | function_stmt    
    | call
    |assign_stm
    |lambda
    ;



print_stm:
     PRINT expr_list          { printf(">> %d\n", $2); }
    |PRINT TOK_L_P string TOK_R_P          { printf(">> %s\n", $3); }
    |PRINT  string           { printf(">> %s\n", $2); }


assign_stm:
     target ASSIGN expr_list      { set_value($1, $3); $$ = $3; }
    | target ASSIGN codeblock  { set_value($1, $3); $$ = $3; }
    | target ASSIGN string  
    | target ASSIGN lambda  
    ;


call:
    target TOK_L_P  TOK_R_P

    | target TOK_L_P expr_list TOK_R_P

    | target ASSIGN target TOK_L_P  TOK_R_P

    | target ASSIGN target TOK_L_P expr_list TOK_R_P
    ;

target:
	VAR                { $$ = $1; }
	|target DOT VAR    { $$ = $1; }
	;

function_stmt:
    DEF function_name TOK_L_P parameter_list TOK_R_P THEN codeblock
    |DEF function_name TOK_L_P  TOK_R_P THEN codeblock;;
    

parameter_list:

    |parameter_list COMMA parameter
    |parameter
    |term;

parameter:
    VAR
    | parameter DOT VAR;

function_name:
    VAR
    |INIT;

classdef:
	CLASS classname THEN codeblock;
		
		
classname:
	VAR
    ;


import_stmt: 

	IMPORT module
	| IMPORT module AS name
	| IMPORT modules modules
	| IMPORT modules AS name modules
	| FROM relative_module IMPORT VAR
	| FROM relative_module IMPORT VAR AS name;

module: 
	module DOT name 
	| name;

relative_module:
	 module 
	| dots module
	| dots;


dots: DOT
	| dots DOT;

modules: modules COMMA  module
	| modules COMMA  module AS name
	| COMMA module
	| COMMA module AS name;


name: 
    VAR ;

//-------------------------------------------------------------------------------------------------------------
if_stmt:
     IF cond THEN codeblock                
     | IF cond THEN codeblock elif_stmt    
     | IF cond THEN codeblock elif_stmt ELSE THEN codeblock    
    ;

elif_stmt:
    ELIF cond THEN codeblock   
    |elif_stmt ELIF cond THEN codeblock 
//-------------------------------------------------------------------------------------------------------------
for_stmt:
	FOR for_target_list IN expr_list THEN codeblock { $$ = $6; }
	|FOR for_target_list IN RANGE TOK_L_P expr_list TOK_R_P  THEN codeblock { $$ = $9; }
;   

for_target_list:
	for_target
	| for_target_list COMMA for_target
	| for_target_list COMMA;

for_target:
	VAR
	|TOK_L_P for_target_list TOK_R_P;

//-------------------------------------------------------------------------------------------------------------
dict_display:
	TOK_L_BRA TOK_R_BRA
	| TOK_L_BRA key_datum_list TOK_R_BRA;
		
key_datum_list:
	key_datum
	| key_datum COMMA
	| key_datum key_datums
	| key_datum key_datums COMMA;

key_datums:
	COMMA key_datum
	| key_datums COMMA key_datum;
		
key_datum:
		expr_string THEN expr_string;

expr_string:
    expr
    |string;

lambda:
	LAMBDA THEN expr
	| LAMBDA lam_parameters THEN expr
	;


lam_parameters:
	|VAR
	|relative_var
	|lam_parameters COMMA VAR
	|lam_parameters COMMA relative_var;



codeblock
    : indent statements dedent { $$ = $2; }
    ;

expr_list:  
    expr_list COMMA expr     { $$ = $3; }
    |expr                    { $$ = $1; }
    ;

expr
    : term                  { $$ = $1; }
    | expr TOK_PLUS term    { $$ = $1 + $3; }
    | expr TOK_MINUS term   { $$ = $1 - $3; }
    ;

term
    : factor                { $$ = $1; }
    | term TOK_MUL factor   { $$ = $1 * $3; }
    | term TOK_DIV factor   { $$ = $1 / $3; }
    ;

factor
    : INTNUM                { $$ = $1; }
    | TOK_L_P expr TOK_R_P  { $$ = $2; }
    | TRUE                  { $$ = 1; }
    | FALSE                 { $$ = 0; }
    | VAR                   { $$ = get_value($1); }
    | relative_var
    |dict_display
    ;



cond
    : expr TOK_EQ expr        { $$ = ($1 == $3); }
    | expr TOK_NE expr        { $$ = ($1 != $3); }
    | expr TOK_GE expr        { $$ = ($1 >= $3); }
    | expr TOK_LE expr        { $$ = ($1 <= $3); }
    | expr TOK_GT expr        { $$ = ($1 > $3); }
    | expr TOK_LT expr        { $$ = ($1 < $3); }
    | expr                    { $$ = $1; }
    |  TOK_L_P cond TOK_R_P   { $$ = $2; }
    ;




relative_var:
    VAR
    |relative_var DOT VAR;

string:
    STRING  { $$ = $1; };





indent
    : TOK_INDENT
        {
            FILE *debug = fopen("/dev/null", "w");
            fprintf(debug, "%sindent%s(%d:%d-%d)\n",
                green, fg, @1.first_line, @1.first_column, @1.last_column);
        }

dedent
    : TOK_DEDENT
        {
            FILE *debug = fopen("/dev/null", "w");
            fprintf(debug, "%sdedent%s(%d:%d-%d)\n",
                green, fg, @1.first_line, @1.first_column, @1.last_column);
        }
    ;

%%

const char* g_current_filename = "stdin";

int main(int argc, char *argv[])
{
    yyin = stdin;
#if YYDEBUG
    yydebug = 1;
#endif

    if (argc == 2) {
        yyin = fopen(argv[1], "r");
        g_current_filename = argv[1];
        if (!yyin) {
            perror(argv[1]);
            return 1;
        }
    }

    do {
        yyparse();
    } while (!feof(yyin));
}

void yyerror(const char *s)
{
    fprintf(stderr, "%s:%d:%d-%d: syntax error: %s\n",
        g_current_filename, yylloc.first_line,
        yylloc.first_column, yylloc.last_column, s);
    exit(-1);
}

int search_variable(char *name)
{
    for (int i = 0; i < var_used; i++) {
        if (!strcmp(var[i].name, name)) { return i; }
    }
    return -1;
}

int set_value(char *name, double value)
{
    int i = search_variable(name);
    if (i == -1) {
        var[var_used].name = strdup(name);
        var[var_used].value = value;
        var_used++;
    } else {
        var[i].value = value;
    }
    return 0;
}

double get_value(char *name)
{
    int i = search_variable(name);
    if (i != -1) { return var[i].value; }
    fprintf(stderr, "[-] %s is not definded\n", name);
    return 0.0;
}
