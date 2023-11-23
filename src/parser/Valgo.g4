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
        primaryExpr
        (binop=('+' | '-' | '*' | '/' | '%' | '==' | '!=' | '<' | '>' |
        '<=' | '>=' | 'and' | 'or' | '&' | '|' | '~' | '<<' | '>>') expr)?;
primaryExpr:
        INT #intLiteralExpr
    |   ID #variableExpr
    |   '(' expr ')' #parenthsizedExpr
    |   ID '(' (expr (',' expr)*)? ')' #funcCallExpr
    ;

ID:         [a-zA-Z]+[a-zA-Z0-9_]*;
INT:        [0-9]+;
COMMENT:    ('//' ~[\r\n]* | '/*' .*? '*/') -> skip;
WS:         [ \t\r\n]+ -> skip;
