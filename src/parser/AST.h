#ifndef AST_HPP
#define AST_HPP

#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using std::cin, std::cout, std::string, std::vector, std::map;
using std::unique_ptr, std::make_unique, std::shared_ptr, std::make_shared;

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
    {"++:", CONCAT},
    {"<<:", APPEND},
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
    {CONCAT, "++:"},
    {APPEND, "<<:"},
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
    NONE,
    NOT,
    BIT_NOT,
    PLUS,
    MINUS,
    INT_CAST,
    CHAR_CAST,
    FLOAT_CAST,
    LENGTH_OF,
};

const map<string, UnOp> unopOfSymbol = {
    {"", NONE},
    {"not", NOT},
    {"~", BIT_NOT},
    {"+", PLUS},
    {"-", MINUS},
    {"int::", INT_CAST},
    {"char::", CHAR_CAST},
    {"float::", FLOAT_CAST},
    {"#", LENGTH_OF},
};

const map<UnOp, string> symbolOfUnop = {
    {NONE, ""},
    {NOT, "not"},
    {BIT_NOT, "~"},
    {PLUS, "+"},
    {MINUS, "-"},
    {INT_CAST, "int::"},
    {CHAR_CAST, "char::"},
    {FLOAT_CAST, "float::"},
    {LENGTH_OF, "#"},
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

// Abstract classes:
class AST;
class TypeAST;
class ExpressionAST;
class StatementAST;
// Concrete classes:
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
class CharLiteralAST;
class FloatLiteralAST;
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

// Typedefs
// -----------------------------------------------------------------------------
using SymbolTable = map<string, vector<unique_ptr<TypeAST>>>;

// Class definitions
// -----------------------------------------------------------------------------

#define MAKE_COPYABLE(class_name) \
    class_name (const class_name &) = default; \
    class_name &operator=(const class_name &) = default;

#define MAKE_MOVABLE(class_name) \
    class_name (class_name &&) = default; \
    class_name &operator=(class_name &&) = default;

// Interface for an Abstract Syntax Tree node
class AST
{
public:
    AST() = default;
    MAKE_COPYABLE(AST)
    MAKE_MOVABLE(AST)
    virtual ~AST() = default;

    virtual string toString() = 0;
    virtual string codegen(SymbolTable &table) = 0;

#define OVERRIDE_AST_METHODS(class_name) \
    virtual string toString() override; \
    virtual string codegen(SymbolTable &table) override;
};

class TypeAST: public AST
{
public:
    TypeAST() = default;
    MAKE_COPYABLE(TypeAST)
    MAKE_MOVABLE(TypeAST)

    [[nodiscard]] virtual TypeKind kind() const = 0;
    [[nodiscard]] virtual string name() const = 0;
    virtual bool operator==(const TypeAST &other) const = 0;

#define OVERRIDE_TYPE_AST_METHODS(class_name) \
    OVERRIDE_AST_METHODS(class_name) \
    [[nodiscard]] virtual TypeKind kind() const override; \
    [[nodiscard]] virtual string name() const override; \
    virtual bool operator==(const TypeAST &other) const override;
};

class IntTypeAST: public TypeAST
{
public:
    IntTypeAST() = default;
    MAKE_COPYABLE(IntTypeAST)
    MAKE_MOVABLE(IntTypeAST)
    OVERRIDE_TYPE_AST_METHODS(IntTypeAST)
};

class CharTypeAST: public TypeAST
{
public:
    CharTypeAST() = default;
    MAKE_COPYABLE(CharTypeAST)
    MAKE_MOVABLE(CharTypeAST)
    OVERRIDE_TYPE_AST_METHODS(CharTypeAST)
};

class FloatTypeAST: public TypeAST
{
public:
    FloatTypeAST() = default;
    MAKE_COPYABLE(FloatTypeAST)
    MAKE_MOVABLE(FloatTypeAST)
    OVERRIDE_TYPE_AST_METHODS(FloatTypeAST)
};

class ArrayTypeAST: public TypeAST
{
    shared_ptr<TypeAST> m_elementType;
    size_t size;

public:
    ArrayTypeAST(shared_ptr<TypeAST> elementType, size_t size)
        : m_elementType(std::move(elementType)), size(size)
    {}
    MAKE_COPYABLE(ArrayTypeAST)
    MAKE_MOVABLE(ArrayTypeAST)
    OVERRIDE_TYPE_AST_METHODS(ArrayTypeAST)

    [[nodiscard]] shared_ptr<TypeAST> elementType() const
    {
        return m_elementType;
    }
};

class DynamicArrayTypeAST: public TypeAST
{
    shared_ptr<TypeAST> m_elementType;

public:
    explicit DynamicArrayTypeAST(shared_ptr<TypeAST> elementType)
        : m_elementType(std::move(elementType))
    {}
    MAKE_COPYABLE(DynamicArrayTypeAST)
    MAKE_MOVABLE(DynamicArrayTypeAST)
    OVERRIDE_TYPE_AST_METHODS(DynamicArrayTypeAST)

    [[nodiscard]] shared_ptr<TypeAST> elementType() const
    {
        return m_elementType;
    }
};

class SubroutineTypeAST: public TypeAST
{
    vector<shared_ptr<TypeAST>> m_paramTypes;
    vector<string> m_paramNames;
    shared_ptr<TypeAST> m_returnType;

public:
    SubroutineTypeAST(vector<shared_ptr<TypeAST>> paramTypes,
                      vector<string> paramNames,
                      shared_ptr<TypeAST> returnType = nullptr)
        : m_paramTypes(std::move(paramTypes)),
          m_paramNames(std::move(paramNames)),
          m_returnType(std::move(returnType))
    {}
    MAKE_MOVABLE(SubroutineTypeAST)
    OVERRIDE_TYPE_AST_METHODS(SubroutineTypeAST)

    [[nodiscard]] bool isProcedure() const
    {
        return m_returnType == nullptr;
    }

    [[nodiscard]] shared_ptr<TypeAST> returnType() const
    {
        return m_returnType;
    }

    [[nodiscard]] vector<shared_ptr<TypeAST>> paramTypes() const
    {
        return m_paramTypes;
    }

    [[nodiscard]] vector<string> paramNames() const
    {
        return m_paramNames;
    }
};

class ExpressionAST: public AST
{
public:
    ExpressionAST() = default;
    MAKE_MOVABLE(ExpressionAST)

    [[nodiscard]] virtual shared_ptr<TypeAST> type() const = 0;

#define OVERRIDE_EXPRESSION_AST_METHODS(class_name) \
    OVERRIDE_AST_METHODS(class_name) \
    [[nodiscard]] virtual shared_ptr<TypeAST> type() const override;
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
    MAKE_MOVABLE(BinaryExpressionAST)
    OVERRIDE_EXPRESSION_AST_METHODS(BinaryExpressionAST)
};

class UnaryExpressionAST: public ExpressionAST
{
    UnOp unop;
    unique_ptr<ExpressionAST> operand;

public:
    UnaryExpressionAST(UnOp unop, unique_ptr<ExpressionAST> operand)
        : unop(unop), operand(std::move(operand))
    {}
    MAKE_MOVABLE(UnaryExpressionAST)
    OVERRIDE_EXPRESSION_AST_METHODS(UnaryExpressionAST)
};

class VariableAST: public ExpressionAST
{
    string name;

public:
    explicit VariableAST(string name)
        : name(std::move(name))
    {}
    MAKE_MOVABLE(VariableAST)
    OVERRIDE_EXPRESSION_AST_METHODS(VariableAST)
};

class IntegerLiteralAST: public ExpressionAST
{
    int64_t value;

public:
    explicit IntegerLiteralAST(int64_t value)
        : value(value)
    {}
    MAKE_MOVABLE(IntegerLiteralAST)
    OVERRIDE_EXPRESSION_AST_METHODS(IntegerLiteralAST)
};

class FloatLiteralAST: public ExpressionAST
{
    double value;

public:
    explicit FloatLiteralAST(double value)
        : value(value)
    {}
    MAKE_MOVABLE(FloatLiteralAST)
    OVERRIDE_EXPRESSION_AST_METHODS(FloatLiteralAST)
};

class CharLiteralAST: public ExpressionAST
{
    char value;

public:
    explicit CharLiteralAST(char value)
        : value(value)
    {}
    MAKE_MOVABLE(CharLiteralAST)
    OVERRIDE_EXPRESSION_AST_METHODS(CharLiteralAST)
};

class ArrayLiteralAST: public ExpressionAST
{
    vector<unique_ptr<ExpressionAST>> elements;

public:
    explicit ArrayLiteralAST(vector<unique_ptr<ExpressionAST>> elements)
        : elements(std::move(elements))
    {}
    MAKE_MOVABLE(ArrayLiteralAST)
    OVERRIDE_EXPRESSION_AST_METHODS(ArrayLiteralAST)
};

class ArrayAccessAST: public ExpressionAST
{
    unique_ptr<ExpressionAST> array;
    unique_ptr<ExpressionAST> index;

public:
    ArrayAccessAST(unique_ptr<ExpressionAST> array, unique_ptr<ExpressionAST> index)
        : array(std::move(array)), index(std::move(index))
    {}
    MAKE_MOVABLE(ArrayAccessAST)
    OVERRIDE_EXPRESSION_AST_METHODS(ArrayAccessAST)
};

class CallExpressionAST: public ExpressionAST
{
    string funcName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallExpressionAST(string funcName, vector<unique_ptr<ExpressionAST>> args)
        : funcName(std::move(funcName)), args(std::move(args))
    {}
    MAKE_MOVABLE(CallExpressionAST)
    OVERRIDE_EXPRESSION_AST_METHODS(CallExpressionAST)
};

class StatementAST: public AST
{
public:
    StatementAST() = default;
    virtual ~StatementAST() = default;
    MAKE_MOVABLE(StatementAST)

#define OVERRIDE_STATEMENT_AST_METHODS(class_name) \
    OVERRIDE_AST_METHODS(class_name)
};

class ReturnStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> expression;

public:
    explicit ReturnStatementAST(unique_ptr<ExpressionAST> expression)
        : expression(std::move(expression))
    {}
    MAKE_MOVABLE(ReturnStatementAST)
    OVERRIDE_STATEMENT_AST_METHODS(ReturnStatementAST)
};

class PrintStatementAST: public StatementAST
{
    vector<unique_ptr<ExpressionAST>> expressions;

public:
    explicit PrintStatementAST(vector<unique_ptr<ExpressionAST>> expressions)
        : expressions(std::move(expressions))
    {}
    MAKE_MOVABLE(PrintStatementAST)
    OVERRIDE_STATEMENT_AST_METHODS(PrintStatementAST)
};

class VarDeclarationStatementAST: public StatementAST
{
    shared_ptr<TypeAST> type;
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

    OVERRIDE_STATEMENT_AST_METHODS(VarDeclarationStatementAST)
};

class AssignmentStatementAST: public StatementAST
{
    string name;
    unique_ptr<ExpressionAST> value;

public:
    AssignmentStatementAST(string name, unique_ptr<ExpressionAST> value)
        : name(std::move(name)), value(std::move(value))
    {}

    OVERRIDE_STATEMENT_AST_METHODS(AssignmentStatementAST)
};

class CallStatementAST: public StatementAST
{
    string procName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallStatementAST(string procName, vector<unique_ptr<ExpressionAST>> args)
        : procName(std::move(procName)), args(std::move(args))
    {}

    OVERRIDE_STATEMENT_AST_METHODS(CallStatementAST)
};

class BlockStatementAST: public StatementAST
{
    vector<unique_ptr<StatementAST>> statements;

public:
    explicit BlockStatementAST(vector<unique_ptr<StatementAST>> statements)
        : statements(std::move(statements))
    {}

    OVERRIDE_STATEMENT_AST_METHODS(BlockStatementAST)
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

    OVERRIDE_STATEMENT_AST_METHODS(IfStatementAST)
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
    MAKE_MOVABLE(WhileStatementAST)
    OVERRIDE_STATEMENT_AST_METHODS(WhileStatementAST)
};

class SubroutineAST: AST
{
    unique_ptr<SubroutineTypeAST> subroutineType;
    string name;
    unique_ptr<BlockStatementAST> block;

public:
    SubroutineAST(unique_ptr<SubroutineTypeAST> subroutineType,
                  string name,
                  unique_ptr<BlockStatementAST> block)
        : subroutineType(std::move(subroutineType)),
          name(std::move(name)),
          block(std::move(block))
    {}
    MAKE_MOVABLE(SubroutineAST)
    OVERRIDE_AST_METHODS(SubroutineAST)
};

class ProgramAST: AST
{
    vector<unique_ptr<SubroutineAST>> subroutines;

public:
    explicit ProgramAST(vector<unique_ptr<SubroutineAST>> subroutines)
        : subroutines(std::move(subroutines))
    {}
    MAKE_MOVABLE(ProgramAST)
    OVERRIDE_AST_METHODS(ProgramAST)
};

#endif //AST_HPP
