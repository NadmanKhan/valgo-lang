grammar Valgo;

prog
    : (func | proc)+
    ;

proc
    : 'proc' proto block
    ;

func
    : 'func' proto block
    ;

proto
    : ID '(' (ID (',' ID)*)? ')'
    ;

block
    : '{' stmt* '}'
    ;

stmt
    : ( decl
      | assign
      | print
      | return
      | call
      | ifElse
      ) ((NEWLINE | ';') (NEWLINE* stmt))?
    ;

expr
    :   atom BINOP expr
    |   atom
    ;

atom
    :   '(' expr ')'
    |   INT
    |   ID
    |   UNOP expr
    |   call
    ;

call
    : ID '(' (expr (',' expr)*)? ')'
    ;

ifElse
    : 'if' expr block ('else if' expr block)* ('else' block)?
    ;

decl
    : 'let' assign
    ;

assign
    : ID '=' expr (',' ID '=' expr)*
    ;

print
    : 'print' expr (',' expr)*
    ;

return
    : 'return' expr
    ;

COMMENT
    : ('//' ~[\r\n]* | '/*' .*? '*/') -> skip
    ;

ID      : [a-zA-Z]+[a-zA-Z0-9_]*;
INT     : [0-9]+;
BINOP   : ('+'|'-'|'*'|'/'|'<'|'>'|'<='|'>='|'=='|' and '|' or ');
UNOP    : ('+'|'-'|'not');
NEWLINE : '\r'? '\n' -> skip;
WS      : [ \t]+ -> skip;
