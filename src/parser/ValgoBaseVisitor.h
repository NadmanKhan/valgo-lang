
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

  virtual std::any visitProgram(ValgoParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(ValgoParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure(ValgoParser::ProcedureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(ValgoParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(ValgoParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStatement(ValgoParser::PrintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallStatement(ValgoParser::CallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatement(ValgoParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(ValgoParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(ValgoParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(ValgoParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryExpression(ValgoParser::BinaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(ValgoParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayLiteral(ValgoParser::ArrayLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharLiteral(ValgoParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(ValgoParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAccess(ValgoParser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(ValgoParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesized(ValgoParser::ParenthesizedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(ValgoParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharType(ValgoParser::CharTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatType(ValgoParser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(ValgoParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntType(ValgoParser::IntTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

