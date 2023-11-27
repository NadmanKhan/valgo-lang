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
        '@' name=ID
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
    |   ID (expression (',' expression)*)? ';' #callStatement
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
        // logical
        unaryExpression (op='or' binaryExpression)?
    |   unaryExpression (op='and' binaryExpression)?
        // bitwise
    |   unaryExpression (op='|' binaryExpression)?
    |   unaryExpression (op='~' binaryExpression)? // xor
    |   unaryExpression (op='&' binaryExpression)?
        // equality/relational
    |   unaryExpression (op=('==' | '!=') binaryExpression)?
    |   unaryExpression (op=('<' | '>' | '<=' | '>=') binaryExpression)?
        // dynamic array operations
    |   unaryExpression (op='++:' binaryExpression)? // concatenate
    |   unaryExpression (op='<<:' binaryExpression)? // append
        // bit shift
    |   unaryExpression (op=('<<' | '>>') binaryExpression)?
        // additive
    |   unaryExpression (op=('+' | '-') binaryExpression)?
        // multiplicative
    |   unaryExpression (op=('*' | '/' | '%') binaryExpression)?
    ;

unaryExpression:
        op=
        // additive
        ( '+'
        | '-'
        // logical
        | 'not'
        // bitwise
        | '~'
        // type cast
        | 'int::'
        | 'char::'
        | 'float::'
        // "length of"
        | '#'
        )?
        primaryExpression;

primaryExpression:
        INT #integerLiteral
    |   '[' (expression (',' expression)*)? ']' #arrayLiteral
    |   CHAR #charLiteral
    |   FLOAT #floatLiteral
    |   primaryExpression '[' expression ']' #arrayAccess
    |   ID #variable
    |   '(' expression ')' #parenthesized
    |   ID '(' (expression (',' expression)*)? ')' #call
    ;

type:
        'int' #intType
    |   'char' #charType
    |   'float' #floatType
    |   type '[' INT ']' #arrayType
    |   type '[' '..' ']' #dynamicArrayType
    ;

ID:         [a-zA-Z]+[a-zA-Z0-9_]*;
INT:        [0-9]+;
FLOAT:      [0-9]+ '.' [0-9]+;
CHAR:       '\'' (
            ~['] | '\\' [nrt'\\]
            ) '\'';
COMMENT:    ('//' ~[\r\n]* | '/*' .*? '*/') -> skip;
WS:         [ \t\r\n]+ -> skip;
