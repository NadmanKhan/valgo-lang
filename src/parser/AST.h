#ifndef AST_HPP
#define AST_HPP

#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using std::cin, std::cout, std::string, std::vector, std::map;
using std::unique_ptr, std::make_unique;

// Enums
// -----------------------------------------------------------------------------

enum BinOp
{
    OR,
    AND,
    BIT_OR,
    BIT_XOR,
    BIT_AND,
    EQ,
    NE,
    LT,
    GT,
    LE,
    GE,
    CONCAT,
    APPEND,
    SHL,
    SHR,
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
};

const map<string, BinOp> binopOfSymbol = {
    {"or", OR},
    {"and", AND},
    {"|", BIT_OR},
    {"~", BIT_XOR},
    {"&", BIT_AND},
    {"==", EQ},
    {"!=", NE},
    {"<", LT},
    {">", GT},
    {"<=", LE},
    {">=", GE},
    {"++", CONCAT},
    {"+:", APPEND},
    {"<<", SHL},
    {">>", SHR},
    {"+", ADD},
    {"-", SUB},
    {"*", MUL},
    {"/", DIV},
    {"%", MOD},
};

const map<BinOp, string> symbolOfBinop = {
    {OR, "or"},
    {AND, "and"},
    {BIT_OR, "|"},
    {BIT_XOR, "~"},
    {BIT_AND, "&"},
    {EQ, "=="},
    {NE, "!="},
    {LT, "<"},
    {GT, ">"},
    {LE, "<="},
    {GE, ">="},
    {CONCAT, "++"},
    {APPEND, "+:"},
    {SHL, "<<"},
    {SHR, ">>"},
    {ADD, "+"},
    {SUB, "-"},
    {MUL, "*"},
    {DIV, "/"},
    {MOD, "%"},
};

enum UnOp
{
    NOT,
    BIT_NOT,
    PLUS,
    MINUS,
    INT_CAST,
    CHAR_CAST,
    FLOAT_CAST,
};

const map<string, UnOp> unopOfSymbol = {
    {"not", NOT},
    {"~", BIT_NOT},
    {"+", PLUS},
    {"-", MINUS},
    {"int::", INT_CAST},
    {"char::", CHAR_CAST},
    {"float::", FLOAT_CAST},
};

const map<UnOp, string> symbolOfUnop = {
    {NOT, "not"},
    {BIT_NOT, "~"},
    {PLUS, "+"},
    {MINUS, "-"},
    {INT_CAST, "int::"},
    {CHAR_CAST, "char::"},
    {FLOAT_CAST, "float::"},
};

enum TypeKind
{
    INT,
    CHAR,
    FLOAT,
    ARRAY,
    DYNAMIC_ARRAY,
    SUBROUTINE,
};

// Class declarations
// -----------------------------------------------------------------------------

// Abstract classes
class AST;
class TypeAST;
class ExpressionAST;
class StatementAST;
// Concrete classes
// Types
class IntTypeAST;
class CharTypeAST;
class FloatTypeAST;
class ArrayTypeAST;
class DynamicArrayTypeAST;
class SubroutineTypeAST;
// Expressions
class UnaryExpressionAST;
class BinaryExpressionAST;
class VariableAST;
class IntegerLiteralAST;
class FloatLiteralAST;
class CharLiteralAST;
class ArrayLiteralAST;
class ArrayAccessAST;
class CallExpressionAST;
// Statements
class ReturnStatementAST;
class PrintStatementAST;
class VarDeclarationStatementAST;
class AssignmentStatementAST;
class CallStatementAST;
class BlockStatementAST;
class IfStatementAST;
class WhileStatementAST;
// Root
class SubroutineAST;
class ProgramAST;


#define CONSTRUCTORS_AND_ASSIGNMENTS(class_name) \
    class_name (const class_name &) = delete; \
    class_name &operator=(const class_name &) = delete; \
    class_name (class_name &&) = default; \
    class_name &operator=(class_name &&) = default;

// Class definitions
// -----------------------------------------------------------------------------

// Interface for an Abstract Syntax Tree node
class AST
{
public:
    AST() = default;
    virtual ~AST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(AST)

    virtual string toString() = 0;
    virtual string codegen() = 0;

#define AST_METHODS(class_name) \
    virtual string toString() override; \
    virtual string codegen() override;
};

class TypeAST: public AST
{
public:
    TypeAST() = default;
    virtual ~TypeAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(TypeAST)

    [[nodiscard]] virtual TypeKind kind() const = 0;
    [[nodiscard]] virtual string name() const = 0;

#define TYPE_AST_METHODS(class_name) \
    AST_METHODS(class_name) \
    [[nodiscard]] virtual TypeKind kind() const override; \
    [[nodiscard]] virtual string name() const override;
};

class ExpressionAST: public AST
{
public:
    ExpressionAST() = default;
    virtual ~ExpressionAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(ExpressionAST)

    [[nodiscard]] virtual TypeKind typeKind() const = 0;

#define EXPRESSION_AST_METHODS(class_name) \
    AST_METHODS(class_name) \
    [[nodiscard]] virtual TypeKind typeKind() const override;
};

class StatementAST: public AST
{
public:
    StatementAST() = default;
    virtual ~StatementAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(StatementAST)

#define STATEMENT_AST_METHODS(class_name) \
    AST_METHODS(class_name)
};

class IntTypeAST: public TypeAST
{
public:
    IntTypeAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(IntTypeAST)
    TYPE_AST_METHODS(IntTypeAST)
};

class CharTypeAST: public TypeAST
{
public:
    CharTypeAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(CharTypeAST)
    TYPE_AST_METHODS(CharTypeAST)
};

class FloatTypeAST: public TypeAST
{
public:
    FloatTypeAST() = default;
    CONSTRUCTORS_AND_ASSIGNMENTS(FloatTypeAST)
    TYPE_AST_METHODS(FloatTypeAST)
};

class ArrayTypeAST: public TypeAST
{
    unique_ptr<TypeAST> elementType;
    size_t size;

public:
    ArrayTypeAST(unique_ptr<TypeAST> elementType, size_t size)
        : elementType(std::move(elementType)), size(size)
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(ArrayTypeAST)
    TYPE_AST_METHODS(ArrayTypeAST)
};

class DynamicArrayTypeAST: public TypeAST
{
    unique_ptr<TypeAST> elementType;

public:
    DynamicArrayTypeAST(unique_ptr<TypeAST> elementType)
        : elementType(std::move(elementType))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(DynamicArrayTypeAST)
    TYPE_AST_METHODS(DynamicArrayTypeAST)
};

class SubroutineTypeAST: public TypeAST
{
    vector<unique_ptr<TypeAST>> paramTypes;
    unique_ptr<TypeAST> returnType;

public:
    explicit SubroutineTypeAST(vector<unique_ptr<TypeAST>> paramTypes,
                               unique_ptr<TypeAST> returnType = nullptr)
        : paramTypes(std::move(paramTypes)), returnType(std::move(returnType))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(SubroutineTypeAST)
    TYPE_AST_METHODS(SubroutineTypeAST)

    [[nodiscard]] bool isProcedure() const
    {
        return returnType == nullptr;
    }
};

class BinaryExpressionAST: public ExpressionAST
{
    BinOp binop;
    unique_ptr<ExpressionAST> lhs;
    unique_ptr<ExpressionAST> rhs;

public:
    BinaryExpressionAST(BinOp binop,
                        unique_ptr<ExpressionAST> lhs,
                        unique_ptr<ExpressionAST> rhs)
        : binop(binop), lhs(std::move(lhs)), rhs(std::move(rhs))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(BinaryExpressionAST)
    EXPRESSION_AST_METHODS(BinaryExpressionAST)
};

class UnaryExpressionAST: public ExpressionAST
{
    UnOp unop;
    unique_ptr<ExpressionAST> operand;

public:
    UnaryExpressionAST(UnOp unop, unique_ptr<ExpressionAST> operand)
        : unop(unop), operand(std::move(operand))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(UnaryExpressionAST)
    EXPRESSION_AST_METHODS(UnaryExpressionAST)
};

class VariableAST: public ExpressionAST
{
    string name;

public:
    explicit VariableAST(string name)
        : name(std::move(name))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(VariableAST)
    EXPRESSION_AST_METHODS(VariableAST)
};

class IntegerLiteralAST: public ExpressionAST
{
    int64_t value;

public:
    explicit IntegerLiteralAST(int64_t value)
        : value(value)
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(IntegerLiteralAST)
    EXPRESSION_AST_METHODS(IntegerLiteralAST)
};

class FloatLiteralAST: public ExpressionAST
{
    double value;

public:
    explicit FloatLiteralAST(double value)
        : value(value)
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(FloatLiteralAST)
    EXPRESSION_AST_METHODS(FloatLiteralAST)
};

class CharLiteralAST: public ExpressionAST
{
    char value;

public:
    explicit CharLiteralAST(char value)
        : value(value)
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(CharLiteralAST)
    EXPRESSION_AST_METHODS(CharLiteralAST)
};

class ArrayLiteralAST: public ExpressionAST
{
    vector<unique_ptr<ExpressionAST>> elements;

public:
    explicit ArrayLiteralAST(vector<unique_ptr<ExpressionAST>> elements)
        : elements(std::move(elements))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(ArrayLiteralAST)
    EXPRESSION_AST_METHODS(ArrayLiteralAST)
};

class ArrayAccessAST: public ExpressionAST
{
    unique_ptr<ExpressionAST> array;
    unique_ptr<ExpressionAST> index;

public:
    ArrayAccessAST(unique_ptr<ExpressionAST> array, unique_ptr<ExpressionAST> index)
        : array(std::move(array)), index(std::move(index))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(ArrayAccessAST)
    EXPRESSION_AST_METHODS(ArrayAccessAST)
};

class CallExpressionAST: public ExpressionAST
{
    string funcName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallExpressionAST(string funcName, vector<unique_ptr<ExpressionAST>> args)
        : funcName(std::move(funcName)), args(std::move(args))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(CallExpressionAST)
    EXPRESSION_AST_METHODS(CallExpressionAST)
};

class ReturnStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> expression;

public:
    explicit ReturnStatementAST(unique_ptr<ExpressionAST> expression)
        : expression(std::move(expression))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(ReturnStatementAST)
    STATEMENT_AST_METHODS(ReturnStatementAST)
};

class PrintStatementAST: public StatementAST
{
    vector<unique_ptr<ExpressionAST>> expressions;

public:
    explicit PrintStatementAST(vector<unique_ptr<ExpressionAST>> expressions)
        : expressions(std::move(expressions))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(PrintStatementAST)
    STATEMENT_AST_METHODS(PrintStatementAST)
};

class VarDeclarationStatementAST: public StatementAST
{
    unique_ptr<TypeAST> type;
    string name;
    unique_ptr<ExpressionAST> value;

public:
    VarDeclarationStatementAST(unique_ptr<TypeAST> type,
                               string name,
                               unique_ptr<ExpressionAST> value)
        : type(std::move(type)),
          name(std::move(name)),
          value(std::move(value))
    {}

    STATEMENT_AST_METHODS(VarDeclarationStatementAST)
};

class AssignmentStatementAST: public StatementAST
{
    string name;
    unique_ptr<ExpressionAST> value;

public:
    AssignmentStatementAST(string name, unique_ptr<ExpressionAST> value)
        : name(std::move(name)), value(std::move(value))
    {}

    STATEMENT_AST_METHODS(AssignmentStatementAST)
};

class CallStatementAST: public StatementAST
{
    string procName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallStatementAST(string procName, vector<unique_ptr<ExpressionAST>> args)
        : procName(std::move(procName)), args(std::move(args))
    {}

    STATEMENT_AST_METHODS(CallStatementAST)
};

class BlockStatementAST: public StatementAST
{
    vector<unique_ptr<StatementAST>> statements;

public:
    explicit BlockStatementAST(vector<unique_ptr<StatementAST>> statements)
        : statements(std::move(statements))
    {}

    STATEMENT_AST_METHODS(BlockStatementAST)
};

class IfStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> ifCondition;
    unique_ptr<BlockStatementAST> ifBlock;
    vector<unique_ptr<ExpressionAST>> elseIfConditions;
    vector<unique_ptr<BlockStatementAST>> elseIfBlocks;
    unique_ptr<BlockStatementAST> elseBlock;

public:
    IfStatementAST(unique_ptr<ExpressionAST> ifCondition,
                   unique_ptr<BlockStatementAST> ifBlock,
                   vector<unique_ptr<ExpressionAST>> elseIfConditions,
                   vector<unique_ptr<BlockStatementAST>> elseIfBlocks,
                   unique_ptr<BlockStatementAST> elseBlock)
        : ifCondition(std::move(ifCondition)),
          ifBlock(std::move(ifBlock)),
          elseIfConditions(std::move(elseIfConditions)),
          elseIfBlocks(std::move(elseIfBlocks)),
          elseBlock(std::move(elseBlock))
    {}

    STATEMENT_AST_METHODS(IfStatementAST)
};

class WhileStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> condition;
    unique_ptr<BlockStatementAST> block;

public:
    WhileStatementAST(unique_ptr<ExpressionAST> condition,
                      unique_ptr<BlockStatementAST> block)
        : condition(std::move(condition)), block(std::move(block))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(WhileStatementAST)
    STATEMENT_AST_METHODS(WhileStatementAST)
};

class SubroutineAST: AST
{
    string name;
    vector<string> paramNames;
    unique_ptr<BlockStatementAST> block;
    unique_ptr<SubroutineTypeAST> subroutineType;

public:
    SubroutineAST(string name,
                  vector<string> paramNames,
                  unique_ptr<BlockStatementAST> block,
                  unique_ptr<SubroutineTypeAST> subroutineType)
        : name(std::move(name)),
          paramNames(std::move(paramNames)),
          block(std::move(block)),
          subroutineType(std::move(subroutineType))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(SubroutineAST)
    AST_METHODS(SubroutineAST)
};

class ProgramAST: AST
{
    vector<unique_ptr<SubroutineAST>> subroutines;

public:
    explicit ProgramAST(vector<unique_ptr<SubroutineAST>> subroutines)
        : subroutines(std::move(subroutines))
    {}
    CONSTRUCTORS_AND_ASSIGNMENTS(ProgramAST)
    AST_METHODS(ProgramAST)
};

#endif //AST_HPP
