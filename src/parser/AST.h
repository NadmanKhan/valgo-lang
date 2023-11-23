#ifndef AST_HPP
#define AST_HPP

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>

using std::cin, std::cout, std::string, std::vector;
using std::unique_ptr, std::make_unique;

class ExpressionAST;
class VariableAST;
class IntLiteralAST;
class BinaryExpressionAST;
class FuncCallExpressionAST;
class SubroutineAST;
class StatementAST;
class BlockAST;
class IfElseAST;
class ExitStatementAST;
class ReturnStatementAST;
class PrintStatementAST;
class DeclarationStatementAST;
class AssignmentStatementAST;
class ProcCallStatementAST;


#define AST_DECL(class_name) \
    class_name (const class_name &) = delete; \
    class_name &operator=(const class_name &) = delete; \
    class_name (class_name &&) = default; \
    class_name &operator=(class_name &&) = default; \
    virtual string toString() override;


/// Interface for an Abstract Syntax Tree node
class AST
{
public:
    virtual ~AST() = 0;
    virtual string toString() = 0;
};

AST::~AST() {}

class ExpressionAST: public AST
{
public:
    ExpressionAST() = default;

    AST_DECL(ExpressionAST)
};

class VariableAST: public ExpressionAST
{
    string name;

public:
    VariableAST(string name)
        : name(std::move(name))
    {}

    AST_DECL(VariableAST)
};

class IntLiteralAST: public ExpressionAST
{
    int64_t value;

public:
    IntLiteralAST(int64_t value)
        : value(value)
    {}

    AST_DECL(IntLiteralAST)
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
        : op(std::move(op)),
          lhs(std::move(lhs)),
          rhs(std::move(rhs))
    {}

    AST_DECL(BinaryExpressionAST)
};

class FuncCallExpressionAST: public ExpressionAST
{
    string name;
    vector<unique_ptr<ExpressionAST>> args;

public:
    FuncCallExpressionAST(string name,
                          vector<unique_ptr<ExpressionAST>> args)
        : name(std::move(name)),
          args(std::move(args))
    {}

    AST_DECL(FuncCallExpressionAST)
};

class StatementAST: public AST
{
public:
    StatementAST() = default;

    AST_DECL(StatementAST)
};

class BlockAST: public StatementAST
{
    vector<unique_ptr<StatementAST>> statements;

public:
    BlockAST(vector<unique_ptr<StatementAST>> statements)
        : statements(std::move(statements))
    {}

    AST_DECL(BlockAST)
};

class IfElseAST: public BlockAST
{
    unique_ptr<ExpressionAST> condition;
    // inherited: vector<unique_ptr<StatementAST>> statements;
    unique_ptr<BlockAST> elseBlock;

public:
    IfElseAST(unique_ptr<ExpressionAST> condition,
              vector<unique_ptr<StatementAST>> statements,
              unique_ptr<BlockAST> elseBlock)
        : BlockAST(std::move(statements)),
          condition(std::move(condition)),
          elseBlock(std::move(elseBlock))
    {}

    AST_DECL(IfElseAST)
};

class ExitStatementAST: public StatementAST
{
public:
    ExitStatementAST() = default;

    AST_DECL(ExitStatementAST)
};

class ReturnStatementAST: public StatementAST
{
    unique_ptr<ExpressionAST> expression;

public:
    ReturnStatementAST(unique_ptr<ExpressionAST> expression)
        : expression(std::move(expression))
    {}

    AST_DECL(ReturnStatementAST)
};

class PrintStatementAST: public StatementAST
{
    vector<unique_ptr<ExpressionAST>> expressions;

public:
    PrintStatementAST(vector<unique_ptr<ExpressionAST>> expressions)
        : expressions(std::move(expressions))
    {}

    AST_DECL(PrintStatementAST)
};

class DeclarationStatementAST: public StatementAST
{
    string name;
    unique_ptr<ExpressionAST> expression;

public:
    DeclarationStatementAST(string name,
                            unique_ptr<ExpressionAST> expression)
        : name(std::move(name)),
          expression(std::move(expression))
    {}

    AST_DECL(DeclarationStatementAST)
};

class AssignmentStatementAST: public StatementAST
{
    string name;
    unique_ptr<ExpressionAST> expression;

public:
    AssignmentStatementAST(string name,
                           unique_ptr<ExpressionAST> expression)
        : name(std::move(name)),
          expression(std::move(expression))
    {}

    AST_DECL(AssignmentStatementAST)
};

class ProcCallStatementAST: public StatementAST
{
    string name;
    vector<unique_ptr<ExpressionAST>> args;

public:
    ProcCallStatementAST(string name,
                         vector<unique_ptr<ExpressionAST>> args)
        : name(std::move(name)),
          args(std::move(args))
    {}

    AST_DECL(ProcCallStatementAST)
};

class SubroutineAST: public AST
{
    bool isFunction;
    string name;
    vector<string> params;
    unique_ptr<BlockAST> block;

public:
    SubroutineAST(bool isFunction,
                  string name,
                  vector<string> params,
                  unique_ptr<BlockAST> block)
        : isFunction(isFunction),
          name(std::move(name)),
          params(std::move(params)),
          block(std::move(block))
    {}

    AST_DECL(SubroutineAST)
};

class ProgramAST: public AST
{
    vector<unique_ptr<SubroutineAST>> subroutines;

public:
    ProgramAST(vector<unique_ptr<SubroutineAST>> subroutines)
        : subroutines(std::move(subroutines))
    {}

    AST_DECL(ProgramAST)
};

#endif //AST_HPP
