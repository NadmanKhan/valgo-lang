grammar Valgo;

program:
        (function | procedure)+ EOF;

function:
        returnType=type name=ID
        '('
        (
            paramTypes+=type paramNames+=ID
            (',' paramTypes+=type paramNames+=ID)*
        )?
        ')'
        block;

procedure:
        '#' name=ID
        (
            '$' paramTypes+=type paramNames+=ID
            (',' '$' paramTypes+=type paramNames+=ID)*
        )?
        block;

block:
        '{' statement* '}';

statement:
        'return' (expression)? ';' #returnStatement
    |   'print' expression (',' expression)* ';' #printStatement
    |   type ID '=' expression ';' #varDeclarationStatement
    |   ID '=' expression ';' #assignmentStatement
    |   ID '(' (expression (',' expression)*)? ')' ';' #callStatement
    |   block #blockStatement
    |   'if' ifCondition=expression ifBlock=block
        ('else if' elseIfConditions+=expression elseIfBlocks+=block)*
        ('else' elseBlock=block)?
        #ifStatement
    |   'while' expression block #whileStatement
    ;

expression:
        binaryExpression;

binaryExpression:
        unaryExpression (op='or' binaryExpression)?
    |   unaryExpression (op='and' binaryExpression)?
    |   unaryExpression (op='|' binaryExpression)?
    |   unaryExpression (op='~' binaryExpression)? // xor
    |   unaryExpression (op='&' binaryExpression)?
    |   unaryExpression (op=('==' | '!=') binaryExpression)?
    |   unaryExpression (op=('<' | '>' | '<=' | '>=') binaryExpression)?
    |   unaryExpression (op='++' binaryExpression)? // concat dynamic arrays
    |   unaryExpression (op='+:' binaryExpression)? // append to dynamic array
    |   unaryExpression (op=('<<' | '>>') binaryExpression)?
    |   unaryExpression (op=('+' | '-') binaryExpression)?
    |   unaryExpression (op=('*' | '/' | '%') binaryExpression)?
    ;

unaryExpression:
        op=('+' | '-' | 'not' | '~')? primaryExpression;

primaryExpression:
        literal=INT #integerLiteral
    |   '[' (values+=expression (',' values+=expression)*)? ']' #arrayLiteral
    |   literal=CHAR #charLiteral
    |   literal=FLOAT #floatLiteral
    |   name=ID '[' index=expression ']' #arrayAccess
    |   name=ID #variable
    |   '(' expression ')' #parenthesized
    |   name=ID '(' (args+=expression (',' args+=expression)*)? ')' #call
    ;

type:
        'int' #intType
    |   'char' #charType
    |   'float' #floatType
    |   base=type '[' size=INT ']' #arrayType
    |   base=type '[' '..' ']' #dynamicArrayType
    ;

ID:         [a-zA-Z]+[a-zA-Z0-9_]*;
INT:        [0-9]+;
FLOAT:      [0-9]+ '.' [0-9]+;
CHAR:       '\'' (
            ~['] | '\\' [nrt'\\]
            ) '\'';
COMMENT:    ('//' ~[\r\n]* | '/*' .*? '*/') -> skip;
WS:         [ \t\r\n]+ -> skip;
