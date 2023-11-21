//
// Created by nadman on 11/2/23.
//

#ifndef VALGO_AST_H
#define VALGO_AST_H

#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <llvm/IR/Value.h>

#define AST_CONSTRUCTORS_AND_ASSIGNMENTS(class_name) \
    class_name(class_name &&) = default; \
    class_name &operator=(class_name &&) = default;

#define AST_VISITOR_METHODS(class_name) \
    virtual llvm::Value *codegen() override;

/// Iinterface for all AST nodes
class ValgoAST
{
public:
    virtual llvm::Value *codegen() = 0;
};

class StmtAST: ValgoAST
{
public:
    StmtAST() = default;
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(StmtAST)
    AST_VISITOR_METHODS(StmtAST)
};

class ExprAST: ValgoAST
{
public:
    ExprAST() = default;
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(ExprAST)
    AST_VISITOR_METHODS(ExprAST)
};

class IntAST: public ExprAST
{
    int64_t value{};

public:
    explicit IntAST(int64_t value)
        : value(value)
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(IntAST)
    AST_VISITOR_METHODS(IntAST)
};

class VarAST: public ExprAST
{
    std::string name;

public:
    explicit VarAST(std::string name)
        : name(std::move(name))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(VarAST)
    AST_VISITOR_METHODS(VarAST)
};

class CallAST: public ExprAST, public StmtAST
{
    std::string name;
    std::vector<std::unique_ptr<ExprAST>> args;

public:
    CallAST(std::string name, std::vector<std::unique_ptr<ExprAST>> args)
        : name(std::move(name)), args(std::move(args))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(CallAST)
};

class UnOpAST: public ExprAST
{
    std::string op;
    std::unique_ptr<ExprAST> expr;

public:
    UnOpAST(std::string op, std::unique_ptr<ExprAST> expr)
        : op(std::move(op)), expr(std::move(expr))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(UnOpAST)
    AST_VISITOR_METHODS(UnOpAST)
};

class BinOpAST: public ExprAST
{
    std::string op;
    std::unique_ptr<ExprAST> lhs;
    std::unique_ptr<ExprAST> rhs;

public:
    BinOpAST(std::string op, std::unique_ptr<ExprAST> lhs, std::unique_ptr<ExprAST> rhs)
        : op(std::move(op)), lhs(std::move(lhs)), rhs(std::move(rhs))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(BinOpAST)
    AST_VISITOR_METHODS(BinOpAST)
};

class AssignAST: public StmtAST
{
    std::string name;
    std::unique_ptr<ExprAST> expr;

public:
    AssignAST(std::string name, std::unique_ptr<ExprAST> expr)
        : name(std::move(name)), expr(std::move(expr))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(AssignAST)
    AST_VISITOR_METHODS(AssignAST)
};

class DeclAST: public StmtAST
{
    std::vector<std::unique_ptr<AssignAST>> assigns;

public:
    explicit DeclAST(std::vector<std::unique_ptr<AssignAST>> assigns)
        : assigns(std::move(assigns))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(DeclAST)
    AST_VISITOR_METHODS(DeclAST)
};

class PrintAST: public StmtAST
{
    std::vector<std::unique_ptr<ExprAST>> exprs;

public:
    explicit PrintAST(std::vector<std::unique_ptr<ExprAST>> exprs)
        : exprs(std::move(exprs))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(PrintAST)
    AST_VISITOR_METHODS(PrintAST)
};

class ReturnAST: public StmtAST
{
    std::unique_ptr<ExprAST> expr;

public:
    explicit ReturnAST(std::unique_ptr<ExprAST> expr)
        : expr(std::move(expr))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(ReturnAST)
    AST_VISITOR_METHODS(ReturnAST)
};

class BlockAST: public StmtAST
{
    std::vector<std::unique_ptr<StmtAST>> stmts;

public:
    explicit BlockAST(std::vector<std::unique_ptr<StmtAST>> stmts)
        : stmts(std::move(stmts))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(BlockAST)
    AST_VISITOR_METHODS(BlockAST)
};

class IfElseAST: public StmtAST
{
    std::unique_ptr<ExprAST> cond;
    std::unique_ptr<BlockAST> then_block;
    std::unique_ptr<BlockAST> else_block;

public:
    IfElseAST(std::unique_ptr<ExprAST> cond, std::unique_ptr<BlockAST> then_block,
              std::unique_ptr<BlockAST> else_block)
        : cond(std::move(cond)),
          then_block(std::move(then_block)),
          else_block(std::move(else_block))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(IfElseAST)
    AST_VISITOR_METHODS(IfElseAST)
};

class ProtoAST: public ValgoAST
{
    std::string name;
    std::vector<std::string> args;

public:
    ProtoAST(std::string name, std::vector<std::string> args)
        : name(std::move(name)), args(std::move(args))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(ProtoAST)
    AST_VISITOR_METHODS(ProtoAST)
};

class FuncAST: public ValgoAST
{
    std::unique_ptr<ProtoAST> proto;
    std::unique_ptr<BlockAST> block;

public:
    FuncAST(std::unique_ptr<ProtoAST> proto, std::unique_ptr<BlockAST> block)
        : proto(std::move(proto)), block(std::move(block))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(FuncAST)
    AST_VISITOR_METHODS(FuncAST)
};

class ProcAST: public ValgoAST
{
    std::unique_ptr<ProtoAST> proto;
    std::unique_ptr<BlockAST> block;

public:
    ProcAST(std::unique_ptr<ProtoAST> proto, std::unique_ptr<BlockAST> block)
        : proto(std::move(proto)), block(std::move(block))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(ProcAST)
    AST_VISITOR_METHODS(ProcAST)
};

class ProgAST: public ValgoAST
{
    std::vector<std::unique_ptr<FuncAST>> funcs;
    std::vector<std::unique_ptr<ProcAST>> procs;

public:
    ProgAST(std::vector<std::unique_ptr<FuncAST>> funcs, std::vector<std::unique_ptr<ProcAST>> procs)
        : funcs(std::move(funcs)), procs(std::move(procs))
    {}
    AST_CONSTRUCTORS_AND_ASSIGNMENTS(ProgAST)
    AST_VISITOR_METHODS(ProgAST)
};

#endif // VALGO_AST_H
