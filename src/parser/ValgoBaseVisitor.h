
// Generated from Valgo.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ValgoVisitor.h"


/**
 * This class provides an empty implementation of ValgoVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ValgoBaseVisitor : public ValgoVisitor {
public:

  virtual std::any visitProg(ValgoParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc(ValgoParser::ProcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(ValgoParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProto(ValgoParser::ProtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ValgoParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(ValgoParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(ValgoParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(ValgoParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(ValgoParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElse(ValgoParser::IfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(ValgoParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(ValgoParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(ValgoParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(ValgoParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }


};

