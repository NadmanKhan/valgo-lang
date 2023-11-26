#include "ASTBuilderVisitor.h"

// Helper functions
// ----------------------------------------------------------------------

TypeAST *visitType(ValgoParser::TypeContext *ctx, ValgoVisitor *visitor)
{
    if (auto p = dynamic_cast<ValgoParser::IntTypeContext *>(ctx)) {
        return any_cast<TypeAST *>(visitor->visitIntType(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::CharTypeContext *>(ctx)) {
        return any_cast<TypeAST *>(visitor->visitCharType(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::FloatTypeContext *>(ctx)) {
        return any_cast<TypeAST *>(visitor->visitFloatType(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayTypeContext *>(ctx)) {
        return any_cast<TypeAST *>(visitor->visitArrayType(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::DynamicArrayTypeContext *>(ctx)) {
        return any_cast<TypeAST *>(visitor->visitDynamicArrayType(p));
    }
    else {
        assert(false);
    }
}

ExpressionAST *visitPrimaryExpression(ValgoParser::PrimaryExpressionContext *ctx,
                                      ValgoVisitor *visitor)
{
    if (auto p = dynamic_cast<ValgoParser::IntegerLiteralContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitIntegerLiteral(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayLiteralContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitArrayLiteral(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::CharLiteralContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitCharLiteral(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::FloatLiteralContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitFloatLiteral(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayAccessContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitArrayAccess(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::VariableContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitVariable(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::ParenthesizedContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitParenthesized(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::CallContext *>(ctx)) {
        return any_cast<ExpressionAST *>(visitor->visitCall(p));
    }
    else {
        assert(false);
    }
}

StatementAST *visitStatement(ValgoParser::StatementContext *ctx, ValgoVisitor *visitor)
{
    if (auto p = dynamic_cast<ValgoParser::ReturnStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitReturnStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::PrintStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitPrintStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::VarDeclarationStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitVarDeclarationStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::AssignmentStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitAssignmentStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::CallStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitCallStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::BlockStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitBlockStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::IfStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitIfStatement(p));
    }
    else if (auto p = dynamic_cast<ValgoParser::WhileStatementContext *>(ctx)) {
        return any_cast<StatementAST *>(visitor->visitWhileStatement(p));
    }
    else {
        assert(false);
    }
}
// ----------------------------------------------------------------------

std::any ASTBuilderVisitor::visitProgram(ValgoParser::ProgramContext *ctx)
{
    vector<unique_ptr<SubroutineAST>> subroutines;
    for (auto el : ctx->function()) {
        auto subroutineAST = any_cast<SubroutineAST *>(visitFunction(el));
        assert(subroutineAST != nullptr);
        subroutines.push_back(unique_ptr<SubroutineAST>(subroutineAST));
    }
    for (auto el : ctx->procedure()) {
        auto subroutineAST = any_cast<SubroutineAST *>(visitProcedure(el));
        assert(subroutineAST != nullptr);
        subroutines.push_back(unique_ptr<SubroutineAST>(subroutineAST));
    }
    return new ProgramAST(std::move(subroutines));
}

std::any ASTBuilderVisitor::visitFunction(ValgoParser::FunctionContext *ctx)
{
    TypeAST *returnType = nullptr;
    if (ctx->returnType != nullptr) {
        returnType = ::visitType(ctx->returnType, this);
    }
    vector<unique_ptr<TypeAST>> paramTypes;
    for (auto el : ctx->paramTypes) {
        auto paramType = ::visitType(el, this);
        assert(paramType != nullptr);
        paramTypes.push_back(unique_ptr<TypeAST>(paramType));
    }
    vector<string> paramNames;
    for (auto el : ctx->paramNames) {
        paramNames.push_back(el->getText());
    }
    auto block = any_cast<BlockStatementAST *>(visitBlock(ctx->block()));
    assert(block != nullptr);
    auto subroutineType = new SubroutineTypeAST(std::move(paramTypes),
                                                std::move(paramNames),
                                                unique_ptr<TypeAST>(returnType));
    return new SubroutineAST(unique_ptr<SubroutineTypeAST>(subroutineType),
                             ctx->name->getText(),
                             unique_ptr<BlockStatementAST>(block));
}

std::any ASTBuilderVisitor::visitProcedure(ValgoParser::ProcedureContext *ctx)
{
    vector<unique_ptr<TypeAST>> paramTypes;
    for (auto el : ctx->paramTypes) {
        auto paramType = ::visitType(el, this);
        assert(paramType != nullptr);
        paramTypes.push_back(unique_ptr<TypeAST>(paramType));
    }
    vector<string> paramNames;
    for (auto el : ctx->paramNames) {
        paramNames.push_back(el->getText());
    }
    auto block = any_cast<BlockStatementAST *>(visitBlock(ctx->block()));
    assert(block != nullptr);
    auto subroutineType = new SubroutineTypeAST(std::move(paramTypes),
                                                std::move(paramNames),
                                                nullptr);
    return new SubroutineAST(unique_ptr<SubroutineTypeAST>(subroutineType),
                             ctx->name->getText(),
                             unique_ptr<BlockStatementAST>(block));
}

std::any ASTBuilderVisitor::visitBlock(ValgoParser::BlockContext *ctx)
{
    vector<unique_ptr<StatementAST>> statements;
    for (auto el : ctx->statement()) {
        auto statement = ::visitStatement(el, this);
        assert(statement != nullptr);
        statements.push_back(unique_ptr<StatementAST>(statement));
    }
    return new BlockStatementAST(std::move(statements));
}

std::any ASTBuilderVisitor::visitReturnStatement(ValgoParser::ReturnStatementContext *ctx)
{
    auto expression = any_cast<ExpressionAST *>(visitExpression(ctx->expression()));
    // expression will be nullptr for procedures
    return new ReturnStatementAST(unique_ptr<ExpressionAST>(expression));
}

std::any ASTBuilderVisitor::visitPrintStatement(ValgoParser::PrintStatementContext *ctx)
{
    vector<unique_ptr<ExpressionAST>> expressions;
    for (auto el : ctx->expression()) {
        auto expression = any_cast<ExpressionAST *>(visitExpression(el));
        assert(expression != nullptr);
        expressions.push_back(unique_ptr<ExpressionAST>(expression));
    }
    return new PrintStatementAST(std::move(expressions));
}

std::any ASTBuilderVisitor::visitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx)
{
    auto type = ::visitType(ctx->type(), this);
    assert(type != nullptr);
    auto value = any_cast<ExpressionAST *>(visit(ctx->expression()));
    return new VarDeclarationStatementAST(unique_ptr<TypeAST>(type),
                                          ctx->ID()->getText(),
                                          unique_ptr<ExpressionAST>(value));
}

std::any ASTBuilderVisitor::visitAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx)
{
    auto value = any_cast<ExpressionAST *>(visit(ctx->expression()));
    assert(value != nullptr);
    return new AssignmentStatementAST(ctx->ID()->getText(),
                                      unique_ptr<ExpressionAST>(value));
}

std::any ASTBuilderVisitor::visitCallStatement(ValgoParser::CallStatementContext *ctx)
{
    vector<unique_ptr<ExpressionAST>> arguments;
    for (auto el : ctx->expression()) {
        auto argument = any_cast<ExpressionAST *>(visitExpression(el));
        assert(argument != nullptr);
        arguments.push_back(unique_ptr<ExpressionAST>(argument));
    }
    return new CallStatementAST(ctx->ID()->getText(),
                                std::move(arguments));
}

std::any ASTBuilderVisitor::visitBlockStatement(ValgoParser::BlockStatementContext *ctx)
{
    return visitBlock(ctx->block());
}

std::any ASTBuilderVisitor::visitIfStatement(ValgoParser::IfStatementContext *ctx)
{
    auto ifCondition = any_cast<ExpressionAST *>(visit(ctx->ifCondition));
    assert(ifCondition != nullptr);
    auto ifBlock = any_cast<BlockStatementAST *>(visit(ctx->ifBlock));
    assert(ifBlock != nullptr);
    vector<unique_ptr<ExpressionAST>> elseIfConditions;
    for (auto el : ctx->elseIfConditions) {
        auto elseIfCondition = any_cast<ExpressionAST *>(visit(el));
        assert(elseIfCondition != nullptr);
        elseIfConditions.push_back(unique_ptr<ExpressionAST>(elseIfCondition));
    }
    vector<unique_ptr<BlockStatementAST>> elseIfBlocks;
    for (auto el : ctx->elseIfBlocks) {
        auto elseIfBlock = any_cast<BlockStatementAST *>(visit(el));
        assert(elseIfBlock != nullptr);
        elseIfBlocks.push_back(unique_ptr<BlockStatementAST>(elseIfBlock));
    }
    auto elseBlock = any_cast<BlockStatementAST *>(visit(ctx->elseBlock));
    // elseBlock will be nullptr if there is no else block
    return new IfStatementAST(unique_ptr<ExpressionAST>(ifCondition),
                              unique_ptr<BlockStatementAST>(ifBlock),
                              std::move(elseIfConditions),
                              std::move(elseIfBlocks),
                              unique_ptr<BlockStatementAST>(elseBlock));
}

std::any ASTBuilderVisitor::visitWhileStatement(ValgoParser::WhileStatementContext *ctx)
{
    auto condition = any_cast<ExpressionAST *>(visitExpression(ctx->expression()));
    assert(condition != nullptr);
    auto block = any_cast<BlockStatementAST *>(visitBlock(ctx->block()));
    assert(block != nullptr);
    return new WhileStatementAST(unique_ptr<ExpressionAST>(condition),
                                 unique_ptr<BlockStatementAST>(block));
}

std::any ASTBuilderVisitor::visitExpression(ValgoParser::ExpressionContext *ctx)
{
    return visitBinaryExpression(ctx->binaryExpression());
}

std::any ASTBuilderVisitor::visitBinaryExpression(ValgoParser::BinaryExpressionContext *ctx)
{
    auto lhs =
        any_cast<UnaryExpressionAST *>(visitUnaryExpression(ctx->unaryExpression()));
    // lhs may be nullptr SOMETIMES
    if (lhs == nullptr) {
        return nullptr;
    }
    auto rhs =
        any_cast<BinaryExpressionAST *>(visitBinaryExpression(ctx->binaryExpression()));
    // rhs will be nullptr iff it's not a binary expression
    if (rhs == nullptr) {
        return lhs;
    }
    return new BinaryExpressionAST(binopOfSymbol.at(ctx->op->getText()),
                                   unique_ptr<UnaryExpressionAST>(lhs),
                                   unique_ptr<BinaryExpressionAST>(rhs));
}

std::any ASTBuilderVisitor::visitUnaryExpression(ValgoParser::UnaryExpressionContext *ctx)
{
    auto expression = ::visitPrimaryExpression(ctx->primaryExpression(), this);
    // can expression be nullptr? IDK yet
    if (ctx->op != nullptr) {
        return new UnaryExpressionAST(unopOfSymbol.at(ctx->op->getText()),
                                      unique_ptr<ExpressionAST>(expression));
    }
    return expression;
}

std::any ASTBuilderVisitor::visitIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx)
{
    auto value = std::stoll(ctx->INT()->getText());
    return new IntegerLiteralAST(value);
}

std::any ASTBuilderVisitor::visitArrayLiteral(ValgoParser::ArrayLiteralContext *ctx)
{
    vector<unique_ptr<ExpressionAST>> elements;
    for (auto el : ctx->expression()) {
        auto element = any_cast<ExpressionAST *>(visitExpression(el));
        assert(element != nullptr);
        elements.push_back(unique_ptr<ExpressionAST>(element));
    }
    return new ArrayLiteralAST(std::move(elements));
}

std::any ASTBuilderVisitor::visitCharLiteral(ValgoParser::CharLiteralContext *ctx)
{
    auto value = ctx->CHAR()->getText();
    char valueChar = value[1];
    if (valueChar == '\\') {
        switch (value[2]) {
            case 'n':valueChar = '\n';
                break;
            case 't':valueChar = '\t';
                break;
            case 'r':valueChar = '\r';
                break;
            case '0':valueChar = '\0';
                break;
            case '\\':valueChar = '\\';
                break;
            case '\'':valueChar = '\'';
                break;
            case '\"':valueChar = '\"';
                break;
            default:assert(false);
        }
    }
    return new CharLiteralAST(valueChar);
}

std::any ASTBuilderVisitor::visitFloatLiteral(ValgoParser::FloatLiteralContext *ctx)
{
    auto value = std::stod(ctx->FLOAT()->getText());
    return new FloatLiteralAST(value);
}

std::any ASTBuilderVisitor::visitArrayAccess(ValgoParser::ArrayAccessContext *ctx)
{
    auto array = ::visitPrimaryExpression(ctx->primaryExpression(), this);
    assert(array != nullptr);
    auto index = any_cast<ExpressionAST *>(visit(ctx->expression()));
    assert(index != nullptr);
    return new ArrayAccessAST(unique_ptr<ExpressionAST>(array),
                              unique_ptr<ExpressionAST>(index));
}

std::any ASTBuilderVisitor::visitVariable(ValgoParser::VariableContext *ctx)
{
    return new VariableAST(ctx->ID()->getText());
}

std::any ASTBuilderVisitor::visitParenthesized(ValgoParser::ParenthesizedContext *ctx)
{
    return ValgoBaseVisitor::visitExpression(ctx->expression());
}

std::any ASTBuilderVisitor::visitCall(ValgoParser::CallContext *ctx)
{
    vector<unique_ptr<ExpressionAST>> arguments;
    for (auto el : ctx->expression()) {
        auto argument = any_cast<ExpressionAST *>(visitExpression(el));
        assert(argument != nullptr);
        arguments.push_back(unique_ptr<ExpressionAST>(argument));
    }
    return new CallExpressionAST(ctx->ID()->getText(),
                                 std::move(arguments));
}

std::any ASTBuilderVisitor::visitIntType(ValgoParser::IntTypeContext *ctx)
{
    return new IntTypeAST();
}

std::any ASTBuilderVisitor::visitCharType(ValgoParser::CharTypeContext *ctx)
{
    return new CharTypeAST();
}

std::any ASTBuilderVisitor::visitFloatType(ValgoParser::FloatTypeContext *ctx)
{
    return new FloatTypeAST();
}

std::any ASTBuilderVisitor::visitArrayType(ValgoParser::ArrayTypeContext *ctx)
{
    auto elementType = ::visitType(ctx->type(), this);
    assert(elementType != nullptr);
    auto size = std::stoull(ctx->INT()->getText());
    return new ArrayTypeAST(unique_ptr<TypeAST>(elementType), size);
}

std::any ASTBuilderVisitor::visitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx)
{
    auto elementType = ::visitType(ctx->type(), this);
    assert(elementType != nullptr);
    return new DynamicArrayTypeAST(unique_ptr<TypeAST>(elementType));
}
