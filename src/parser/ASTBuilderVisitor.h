#ifndef ASTBUILDERVISITOR_H
#define ASTBUILDERVISITOR_H

#include "AST.h"
#include "ValgoBaseVisitor.h"
#include "ValgoParser.h"

class ASTBuilderVisitor: public ValgoBaseVisitor
{
public:
    std::any visitProgram(ValgoParser::ProgramContext *ctx) override;
    std::any visitFunction(ValgoParser::FunctionContext *ctx) override;
    std::any visitProcedure(ValgoParser::ProcedureContext *ctx) override;
    std::any visitBlock(ValgoParser::BlockContext *ctx) override;
    std::any visitReturnStatement(ValgoParser::ReturnStatementContext *ctx) override;
    std::any visitPrintStatement(ValgoParser::PrintStatementContext *ctx) override;
    std::any visitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx) override;
    std::any visitAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx) override;
    std::any visitCallStatement(ValgoParser::CallStatementContext *ctx) override;
    std::any visitBlockStatement(ValgoParser::BlockStatementContext *ctx) override;
    std::any visitIfStatement(ValgoParser::IfStatementContext *ctx) override;
    std::any visitWhileStatement(ValgoParser::WhileStatementContext *ctx) override;
    std::any visitExpression(ValgoParser::ExpressionContext *ctx) override;
    std::any visitBinaryExpression(ValgoParser::BinaryExpressionContext *ctx) override;
    std::any visitUnaryExpression(ValgoParser::UnaryExpressionContext *ctx) override;
    std::any visitIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx) override;
    std::any visitArrayLiteral(ValgoParser::ArrayLiteralContext *ctx) override;
    std::any visitCharLiteral(ValgoParser::CharLiteralContext *ctx) override;
    std::any visitFloatLiteral(ValgoParser::FloatLiteralContext *ctx) override;
    std::any visitArrayAccess(ValgoParser::ArrayAccessContext *ctx) override;
    std::any visitVariable(ValgoParser::VariableContext *ctx) override;
    std::any visitParenthesized(ValgoParser::ParenthesizedContext *ctx) override;
    std::any visitCall(ValgoParser::CallContext *ctx) override;
    std::any visitCharType(ValgoParser::CharTypeContext *ctx) override;
    std::any visitFloatType(ValgoParser::FloatTypeContext *ctx) override;
    std::any visitArrayType(ValgoParser::ArrayTypeContext *ctx) override;
    std::any visitIntType(ValgoParser::IntTypeContext *ctx) override;
    std::any visitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx) override;
public:

};


#endif //ASTBUILDERVISITOR_H
