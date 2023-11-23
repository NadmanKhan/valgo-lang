grammar Valgo;

prog:   (func | proc)+ EOF;
func:   'func' proto block;
proc:   'proc' proto block;
proto:  ID '(' (ID (',' ID)*)? ')';
block:  '{' stmt* '}';
stmt:
        'exit' ';' #exitStmt
    |   'return' expr ';' #returnStmt
    |   'var' ID '=' expr ';' #declStmt
    |   ID '=' expr ';' #assignStmt
    |   'print' expr (',' expr)* ';' #printStmt
    |   ID '(' (expr (',' expr)*)? ')' ';' #procCallStmt
    |   ifElse #ifElseStmt
    |   block #blockStmt
    ;
ifElse: 'if' expr block ('else' (ifElse | block))?;
expr:   unop=('+' | '-' | 'not' | '~')?
        primary
        (binop=('+' | '-' | '*' | '/' | '%' | '==' | '!=' | '<' | '>' |
        '<=' | '>=' | 'and' | 'or' | '&' | '|' | '~' | '<<' | '>>') expr)?;
primary:
        INT #intLiteral
    |   ID #variable
    |   '(' expr ')' #parenthsized
    |   ID '(' (expr (',' expr)*)? ')' #funcCall
    ;

ID:         [a-zA-Z]+[a-zA-Z0-9_]*;
INT:        [0-9]+;
COMMENT:    ('//' ~[\r\n]* | '/*' .*? '*/') -> skip;
WS:         [ \t\r\n]+ -> skip;
