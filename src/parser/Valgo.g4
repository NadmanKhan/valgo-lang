grammar Valgo;

COMMENT : ('//' ~[\r\n]* | '/*' .*? '*/') -> skip;
WS      : ([ \t]+ | NL) -> skip;
NL      : '\r'? '\n' | '\r';
ID      : [a-zA-Z]+[a-zA-Z0-9_]*;
INT     : [0-9]+;
BINOP   : ('+'|'-'|'*'|'/'|'<'|'>'|'<='|'>='|'=='|'and'|'or');
UNOP    : ('+'|'-'|'not');


expr
    :   atom op=BINOP expr #binaryExpr
    |   atom #atomExpr
    |   '(' expr ')' #parenExpr
    ;

atom
    :   INT #intLiteral
    |   ID #variable
    |   UNOP expr #unaryOp
    |   ID '(' (expr (',' expr)*)? ')' #funcCall
    ;

proto
    : ID '(' (ID (',' ID)*)? ')'
    ;

stmt
    :   'return' (expr)? #returnStmt
    |   'var' ID '=' expr (',' ID '=' expr)* #declStmt
    |   ID '=' expr (',' ID '=' expr)* #assignStmt
    |   'print' expr (',' expr)* #printStmt
    |   ID '(' (expr (',' expr)*)? ')' #procCallStmt
    ;

block
    :   outerBlock #normal
    |   'if' cond=expr thenBlock=outerBlock ('else' elseBlock=block)? #ifElse
    ;

blockElement
    :   stmt
    |   block
    ;

outerBlock
    : '{' (blockElement (NL+ blockElement*))? '}'
    ;

func
    : 'func' proto outerBlock
    ;

proc
    : 'proc' proto outerBlock
    ;

prog
    : (func | proc)+
    ;
