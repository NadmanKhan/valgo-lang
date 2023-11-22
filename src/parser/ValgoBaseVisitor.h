
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

  virtual std::any visitBinaryExpr(ValgoParser::BinaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomExpr(ValgoParser::AtomExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(ValgoParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLiteral(ValgoParser::IntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(ValgoParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOp(ValgoParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(ValgoParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProto(ValgoParser::ProtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(ValgoParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclStmt(ValgoParser::DeclStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignStmt(ValgoParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStmt(ValgoParser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcCallStmt(ValgoParser::ProcCallStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormal(ValgoParser::NormalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElse(ValgoParser::IfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockElement(ValgoParser::BlockElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOuterBlock(ValgoParser::OuterBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc(ValgoParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc(ValgoParser::ProcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg(ValgoParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }


};

