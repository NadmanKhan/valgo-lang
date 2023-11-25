#ifndef AST_HPP
#define AST_HPP

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using std::cin, std::cout, std::string, std::vector;
using std::unique_ptr, std::make_unique;

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
// Expressions
class BinaryExpressionAST;
class UnaryExpressionAST;
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

/// Interface for an Abstract Syntax Tree node
class AST
{
public:
    AST() = default;
    virtual ~AST() = default;

    virtual string tree() = 0;
    virtual string codegen() = 0;

#define DECLARE_AST_METHODS(class_name) \
    class_name (const class_name &) = delete; \
    class_name &operator=(const class_name &) = delete; \
    class_name (class_name &&) = default; \
    class_name &operator=(class_name &&) = default; \
    virtual string tree() override; \
    virtual string codegen() override;
};

class TypeAST: public AST
{
public:
    TypeAST() = default;
    virtual ~TypeAST() = default;

    DECLARE_AST_METHODS(TypeAST)
    [[nodiscard]] virtual string name() const = 0;

#define DECLARE_TYPE_AST_METHODS(class_name) \
    DECLARE_AST_METHODS(class_name) \
    virtual string name() const override;
};

class ExpressionAST: public AST
{
public:
    ExpressionAST() = default;
    virtual ~ExpressionAST() = default;

    DECLARE_AST_METHODS(ExpressionAST)
    [[nodiscard]] virtual TypeAST *type() const = 0;

#define DECLARE_EXPRESSION_AST_METHODS(class_name) \
    DECLARE_AST_METHODS(class_name) \
    virtual TypeAST *type() const override;
};

class StatementAST: public AST
{
public:
    StatementAST() = default;
    virtual ~StatementAST() = default;

    DECLARE_AST_METHODS(StatementAST)

#define DECLARE_STATEMENT_AST_METHODS(class_name) \
    DECLARE_AST_METHODS(class_name)
};

class IntTypeAST: public TypeAST
{
public:
    IntTypeAST() = default;

    DECLARE_TYPE_AST_METHODS(IntTypeAST)
};

class CharTypeAST: public TypeAST
{
public:
    CharTypeAST() = default;

    DECLARE_TYPE_AST_METHODS(CharTypeAST)
};

class FloatTypeAST: public TypeAST
{
public:
    FloatTypeAST() = default;

    DECLARE_TYPE_AST_METHODS(FloatTypeAST)
};

class ArrayTypeAST: public TypeAST
{
    unique_ptr<TypeAST> elementType;
    size_t size;

public:
    ArrayTypeAST(unique_ptr<TypeAST> elementType, size_t size)
        : elementType(std::move(elementType)), size(size)
    {}

    DECLARE_TYPE_AST_METHODS(ArrayTypeAST)
};

class DynamicArrayTypeAST: public TypeAST
{
    unique_ptr<TypeAST> elementType;

public:
    DynamicArrayTypeAST(unique_ptr<TypeAST> elementType)
        : elementType(std::move(elementType))
    {}

    DECLARE_TYPE_AST_METHODS(DynamicArrayTypeAST)
};

class BinaryExpressionAST: public ExpressionAST
{
    string op;
    unique_ptr<ExpressionAST> lhs;
    unique_ptr<ExpressionAST> rhs;

public:
    BinaryExpressionAST(string op,
                        unique_ptr<ExpressionAST> lhs,
                        unique_ptr<ExpressionAST> rhs)
        : op(std::move(op)), lhs(std::move(lhs)), rhs(std::move(rhs))
    {}

    DECLARE_EXPRESSION_AST_METHODS(BinaryExpressionAST)
};

class UnaryExpressionAST: public ExpressionAST
{
    string op;
    unique_ptr<ExpressionAST> operand;

public:
    UnaryExpressionAST(string op, unique_ptr<ExpressionAST> operand)
        : op(std::move(op)), operand(std::move(operand))
    {}

    DECLARE_EXPRESSION_AST_METHODS(UnaryExpressionAST)
};

class VariableAST: public ExpressionAST
{
    string name;

public:
    explicit VariableAST(string name)
        : name(std::move(name))
    {}

    DECLARE_EXPRESSION_AST_METHODS(VariableAST)
};

class IntegerLiteralAST: public ExpressionAST
{
    int64_t value;

public:
    explicit IntegerLiteralAST(int64_t value)
        : value(value)
    {}

    DECLARE_EXPRESSION_AST_METHODS(IntegerLiteralAST)
};

class FloatLiteralAST: public ExpressionAST
{
    double value;

public:
    explicit FloatLiteralAST(double value)
        : value(value)
    {}

    DECLARE_EXPRESSION_AST_METHODS(FloatLiteralAST)
};

class CharLiteralAST: public ExpressionAST
{
    char value;

public:
    explicit CharLiteralAST(char value)
        : value(value)
    {}

    DECLARE_EXPRESSION_AST_METHODS(CharLiteralAST)
};

class ArrayLiteralAST: public ExpressionAST
{
    vector<unique_ptr<ExpressionAST>> elements;

public:
    explicit ArrayLiteralAST(vector<unique_ptr<ExpressionAST>> elements)
        : elements(std::move(elements))
    {}

    DECLARE_EXPRESSION_AST_METHODS(ArrayLiteralAST)
};

class ArrayAccessAST: public ExpressionAST
{
    unique_ptr<ExpressionAST> array;
    unique_ptr<ExpressionAST> index;

public:
    ArrayAccessAST(unique_ptr<ExpressionAST> array, unique_ptr<ExpressionAST> index)
        : array(std::move(array)), index(std::move(index))
    {}

    DECLARE_EXPRESSION_AST_METHODS(ArrayAccessAST)
};

class CallExpressionAST: public ExpressionAST
{
    string funcName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallExpressionAST(string funcName, vector<unique_ptr<ExpressionAST>> args)
        : funcName(std::move(funcName)), args(std::move(args))
    {}

    DECLARE_EXPRESSION_AST_METHODS(CallExpressionAST)
};

class ReturnStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> expression;

public:
    explicit ReturnStatementAST(unique_ptr<ExpressionAST> expression)
        : expression(std::move(expression))
    {}

    DECLARE_STATEMENT_AST_METHODS(ReturnStatementAST)
};

class PrintStatementAST: public StatementAST
{
    vector<unique_ptr<ExpressionAST>> expressions;

public:
    explicit PrintStatementAST(vector<unique_ptr<ExpressionAST>> expressions)
        : expressions(std::move(expressions))
    {}

    DECLARE_STATEMENT_AST_METHODS(PrintStatementAST)
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

    DECLARE_STATEMENT_AST_METHODS(VarDeclarationStatementAST)
};

class AssignmentStatementAST: public StatementAST
{
    string name;
    unique_ptr<ExpressionAST> value;

public:
    AssignmentStatementAST(string name, unique_ptr<ExpressionAST> value)
        : name(std::move(name)), value(std::move(value))
    {}

    DECLARE_STATEMENT_AST_METHODS(AssignmentStatementAST)
};

class CallStatementAST: public StatementAST
{
    string procName;
    vector<unique_ptr<ExpressionAST>> args;

public:
    CallStatementAST(string procName, vector<unique_ptr<ExpressionAST>> args)
        : procName(std::move(procName)), args(std::move(args))
    {}

    DECLARE_STATEMENT_AST_METHODS(CallStatementAST)
};

class BlockStatementAST: public StatementAST
{
    vector<unique_ptr<StatementAST>> statements;

public:
    explicit BlockStatementAST(vector<unique_ptr<StatementAST>> statements)
        : statements(std::move(statements))
    {}

    DECLARE_STATEMENT_AST_METHODS(BlockStatementAST)
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

    DECLARE_STATEMENT_AST_METHODS(IfStatementAST)
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

    DECLARE_STATEMENT_AST_METHODS(WhileStatementAST)
};

class SubroutineAST: AST
{
    string name;
    unique_ptr<TypeAST> returnType; // nullptr for procedures
    vector<unique_ptr<TypeAST>> paramTypes;
    vector<string> paramNames;
    unique_ptr<BlockStatementAST> block;

public:
    SubroutineAST(string name,
                  unique_ptr<TypeAST> returnType,
                  vector<unique_ptr<TypeAST>> paramTypes,
                  vector<string> paramNames,
                  unique_ptr<BlockStatementAST> block)
        : name(std::move(name)),
          returnType(std::move(returnType)),
          paramTypes(std::move(paramTypes)),
          paramNames(std::move(paramNames)),
          block(std::move(block))
    {}

    DECLARE_AST_METHODS(SubroutineAST)
};

class ProgramAST: AST
{
    vector<unique_ptr<SubroutineAST>> subroutines;

public:
    explicit ProgramAST(vector<unique_ptr<SubroutineAST>> subroutines)
        : subroutines(std::move(subroutines))
    {}

    DECLARE_AST_METHODS(ProgramAST)
};

#endif //AST_HPP
