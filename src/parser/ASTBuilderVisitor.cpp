#include "ASTBuilderVisitor.h"
using std::any_cast, std::make_any, std::cout, std::endl;

int _count = 0;
int _width = 4;

// Helper functions
// ----------------------------------------------------------------------

std::any visitType(ValgoParser::TypeContext *ctx, ValgoVisitor *visitor)
{
    cout << string(++_count * _width, ' ') << ">> visitType\n";
    std::any result = make_any<TypeAST *>(nullptr);
    if (auto p = dynamic_cast<ValgoParser::IntTypeContext *>(ctx)) {
        result = make_any<TypeAST *>(any_cast<TypeAST *>(visitor->visitIntType(p)));
    }
    else if (auto p = dynamic_cast<ValgoParser::CharTypeContext *>(ctx)) {
        result = make_any<TypeAST *>(any_cast<TypeAST *>(visitor->visitCharType(p)));
    }
    else if (auto p = dynamic_cast<ValgoParser::FloatTypeContext *>(ctx)) {
        result = make_any<TypeAST *>(any_cast<TypeAST *>(visitor->visitFloatType(p)));
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayTypeContext *>(ctx)) {
        result = make_any<TypeAST *>(any_cast<TypeAST *>(visitor->visitArrayType(p)));
    }
    else if (auto p = dynamic_cast<ValgoParser::DynamicArrayTypeContext *>(ctx)) {
        result = make_any<TypeAST *>(any_cast<TypeAST *>(
            visitor->visitDynamicArrayType(p))
        );
    }
    else {
//        assert(false);
    }
    cout << string(_count-- * _width, ' ') << "<< visitType\n";
    return result;
}

std::any visitPrimaryExpression(ValgoParser::PrimaryExpressionContext *ctx,
                                ValgoVisitor *visitor)
{
    cout << string(++_count * _width, ' ') << ">> visitPrimaryExpression\n";
    std::any result = make_any<ExpressionAST *>(nullptr);
    if (auto p = dynamic_cast<ValgoParser::IntegerLiteralContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitIntegerLiteral(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayLiteralContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitArrayLiteral(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::CharLiteralContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitCharLiteral(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::FloatLiteralContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitFloatLiteral(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::ArrayAccessContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitArrayAccess(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::VariableContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitVariable(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::ParenthesizedContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitParenthesized(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::CallContext *>(ctx)) {
        result = make_any<ExpressionAST *>(
            any_cast<ExpressionAST *>(visitor->visitCall(p))
        );
    }
    else {
//        assert(false);
    }
    cout << string(_count-- * _width, ' ') << "<< visitPrimaryExpression\n";
    return result;
}

std::any visitStatement(ValgoParser::StatementContext *ctx, ValgoVisitor *visitor)
{
    cout << string(++_count * _width, ' ') << ">> visitStatement\n";
    std::any result = make_any<StatementAST *>(nullptr);
    if (auto p = dynamic_cast<ValgoParser::ReturnStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitReturnStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::PrintStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitPrintStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::VarDeclarationStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitVarDeclarationStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::AssignmentStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitAssignmentStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::CallStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitCallStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::BlockStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitBlockStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::IfStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitIfStatement(p))
        );
    }
    else if (auto p = dynamic_cast<ValgoParser::WhileStatementContext *>(ctx)) {
        result = make_any<StatementAST *>(
            any_cast<StatementAST *>(visitor->visitWhileStatement(p))
        );
    }
    else {
//        assert(false);
    }
    cout << string(_count-- * _width, ' ') << "<< visitStatement\n";
    return result;
}
// ----------------------------------------------------------------------

std::any ASTBuilderVisitor::visitProgram(ValgoParser::ProgramContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitProgram\n";
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
    cout << string(_count-- * _width, ' ') << "<< visitProgram\n";
    return make_any<ProgramAST *>(new ProgramAST(std::move(subroutines)));
}

std::any ASTBuilderVisitor::visitFunction(ValgoParser::FunctionContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitFunction\n";
    TypeAST *returnType = nullptr;
    if (ctx->returnType != nullptr) {
        returnType = any_cast<TypeAST *>(::visitType(ctx->returnType, this));
        assert(returnType != nullptr);
    }
    vector<shared_ptr<TypeAST>> paramTypes;
    for (auto el : ctx->paramTypes) {
        auto paramType = any_cast<TypeAST *>(::visitType(el, this));
        assert(paramType != nullptr);
        paramTypes.push_back(shared_ptr<TypeAST>(paramType));
    }
    vector<string> paramNames;
    for (auto el : ctx->paramNames) {
        paramNames.push_back(el->getText());
    }
    auto block = dynamic_cast<BlockStatementAST *>(
        any_cast<StatementAST *>(visitBlock(ctx->block())));
    assert(block != nullptr);
    auto subroutineType = new SubroutineTypeAST(std::move(paramTypes),
                                                std::move(paramNames),
                                                unique_ptr<TypeAST>(returnType));
    cout << string(_count-- * _width, ' ') << "<< visitFunction\n";
    return new SubroutineAST(unique_ptr<SubroutineTypeAST>(subroutineType),
                             ctx->name->getText(),
                             unique_ptr<BlockStatementAST>(block));
}

std::any ASTBuilderVisitor::visitProcedure(ValgoParser::ProcedureContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitProcedure\n";
    vector<shared_ptr<TypeAST>> paramTypes;
    for (auto el : ctx->paramTypes) {
        auto paramType = any_cast<TypeAST *>(::visitType(el, this));
        assert(paramType != nullptr);
        paramTypes.push_back(shared_ptr<TypeAST>(paramType));
    }
    vector<string> paramNames;
    for (auto el : ctx->paramNames) {
        paramNames.push_back(el->getText());
    }
    auto block = dynamic_cast<BlockStatementAST *>(
        any_cast<StatementAST *>(visitBlock(ctx->block())));
    assert(block != nullptr);
    auto subroutineType = new SubroutineTypeAST(std::move(paramTypes),
                                                std::move(paramNames),
                                                nullptr);
    cout << string(_count-- * _width, ' ') << "<< visitProcedure\n";
    return new SubroutineAST(unique_ptr<SubroutineTypeAST>(subroutineType),
                             ctx->name->getText(),
                             unique_ptr<BlockStatementAST>(block));
}

std::any ASTBuilderVisitor::visitBlock(ValgoParser::BlockContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitBlock\n";
    vector<unique_ptr<StatementAST>> statements;
    for (auto el : ctx->statement()) {
        auto statement = any_cast<StatementAST *>(::visitStatement(el, this));
        assert(statement != nullptr);
        statements.push_back(unique_ptr<StatementAST>(statement));
    }
    auto stmt = new BlockStatementAST(std::move(statements));
    cout << string(_count-- * _width, ' ') << "<< visitBlock\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitReturnStatement(ValgoParser::ReturnStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitReturnStatement\n";
    auto expression = any_cast<ExpressionAST *>(visitExpression(ctx->expression()));
    // expression will be nullptr for procedures
    auto stmt = new ReturnStatementAST(unique_ptr<ExpressionAST>(expression));
    cout << string(_count-- * _width, ' ') << "<< visitReturnStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitPrintStatement(ValgoParser::PrintStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitPrintStatement\n";
    vector<unique_ptr<ExpressionAST>> expressions;
    for (auto el : ctx->expression()) {
        auto expression = any_cast<ExpressionAST *>(visitExpression(el));
        assert(expression != nullptr);
        expressions.push_back(unique_ptr<ExpressionAST>(expression));
    }
    auto stmt = new PrintStatementAST(std::move(expressions));
    cout << string(_count-- * _width, ' ') << "<< visitPrintStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitVarDeclarationStatement(ValgoParser::VarDeclarationStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitVarDeclarationStatement\n";
    auto type = any_cast<TypeAST *>(::visitType(ctx->type(), this));
    assert(type != nullptr);
    auto value = any_cast<ExpressionAST *>(visit(ctx->expression()));
    auto stmt = new VarDeclarationStatementAST(unique_ptr<TypeAST>(type),
                                               ctx->ID()->getText(),
                                               unique_ptr<ExpressionAST>(value));
    cout << string(_count-- * _width, ' ') << "<< visitVarDeclarationStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitAssignmentStatement(ValgoParser::AssignmentStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitAssignmentStatement\n";
    auto value = any_cast<ExpressionAST *>(visit(ctx->expression()));
    assert(value != nullptr);
    auto stmt = new AssignmentStatementAST(ctx->ID()->getText(),
                                           unique_ptr<ExpressionAST>(value));
    cout << string(_count-- * _width, ' ') << "<< visitAssignmentStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitCallStatement(ValgoParser::CallStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitCallStatement\n";
    vector<unique_ptr<ExpressionAST>> arguments;
    for (auto el : ctx->expression()) {
        auto argument = any_cast<ExpressionAST *>(visitExpression(el));
        assert(argument != nullptr);
        arguments.push_back(unique_ptr<ExpressionAST>(argument));
    }
    auto stmt = new CallStatementAST(ctx->ID()->getText(),
                                     std::move(arguments));
    cout << string(_count-- * _width, ' ') << "<< visitCallStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitBlockStatement(ValgoParser::BlockStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitBlockStatement\n";
    cout << string(_count-- * _width, ' ') << "<< visitBlockStatement\n";
    return visitBlock(ctx->block());
}

std::any ASTBuilderVisitor::visitIfStatement(ValgoParser::IfStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitIfStatement\n";
    auto ifCondition = any_cast<ExpressionAST *>(visit(ctx->ifCondition));
    assert(ifCondition != nullptr);
    auto ifBlock =
        dynamic_cast<BlockStatementAST *>(
            any_cast<StatementAST *>(visit(ctx->ifBlock)));
    assert(ifBlock != nullptr);
    vector<unique_ptr<ExpressionAST>> elseIfConditions;
    for (auto el : ctx->elseIfConditions) {
        auto elseIfCondition = any_cast<ExpressionAST *>(visit(el));
        assert(elseIfCondition != nullptr);
        elseIfConditions.push_back(unique_ptr<ExpressionAST>(elseIfCondition));
    }
    vector<unique_ptr<BlockStatementAST>> elseIfBlocks;
    for (auto el : ctx->elseIfBlocks) {
        auto elseIfBlock = any_cast<StatementAST *>(visit(el));
        assert(elseIfBlock != nullptr);
        auto block = dynamic_cast<BlockStatementAST *>(elseIfBlock);
        elseIfBlocks.push_back(unique_ptr<BlockStatementAST>(block));
    }
    auto elseBlock = dynamic_cast<BlockStatementAST *>(
        any_cast<StatementAST *>(visit(ctx->elseBlock)));
    // elseBlock will be nullptr if there is no else block
    auto stmt = new IfStatementAST(unique_ptr<ExpressionAST>(ifCondition),
                                   unique_ptr<BlockStatementAST>(ifBlock),
                                   std::move(elseIfConditions),
                                   std::move(elseIfBlocks),
                                   unique_ptr<BlockStatementAST>(elseBlock));
    cout << string(_count-- * _width, ' ') << "<< visitIfStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitWhileStatement(ValgoParser::WhileStatementContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitWhileStatement\n";
    auto condition = any_cast<ExpressionAST *>(visitExpression(ctx->expression()));
    assert(condition != nullptr);
    auto block = dynamic_cast<BlockStatementAST *>(
        any_cast<StatementAST *>(visitBlock(ctx->block())));
    assert(block != nullptr);
    auto stmt = new WhileStatementAST(unique_ptr<ExpressionAST>(condition),
                                      unique_ptr<BlockStatementAST>(block));
    cout << string(_count-- * _width, ' ') << "<< visitWhileStatement\n";
    return make_any<StatementAST *>(stmt);
}

std::any ASTBuilderVisitor::visitExpression(ValgoParser::ExpressionContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitExpression\n";
    cout << string(_count-- * _width, ' ') << "<< visitExpression\n";
    return visitBinaryExpression(ctx->binaryExpression());
}

std::any ASTBuilderVisitor::visitBinaryExpression(ValgoParser::BinaryExpressionContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitBinaryExpression\n";
    auto lhs = ctx->unaryExpression();
    // lhs may be nullptr SOMETIMES
    if (lhs == nullptr) {
        return make_any<ExpressionAST *>(nullptr);
    }
    auto lhs1 = any_cast<ExpressionAST *>(visitUnaryExpression(lhs));
    // rhs will be nullptr iff it's not a binary expression
    auto rhs = ctx->binaryExpression();
    if (rhs == nullptr) {
        cout << string(_count-- * _width, ' ') << "<< visitBinaryExpression (early)\n";
        return lhs1;
    }
    auto rhs1 = any_cast<ExpressionAST *>(visitBinaryExpression(rhs));
    auto expr = new BinaryExpressionAST(binopOfSymbol.at(ctx->op->getText()),
                                        unique_ptr<ExpressionAST>(lhs1),
                                        unique_ptr<ExpressionAST>(rhs1));
    cout << string(_count-- * _width, ' ') << "<< visitBinaryExpression (late)\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitUnaryExpression(ValgoParser::UnaryExpressionContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitUnaryExpression\n";
    auto expression =
        any_cast<ExpressionAST *>(::visitPrimaryExpression(ctx->primaryExpression(),
                                                           this));
    // expression cannot be nullptr; check implementation of visitBinaryExpression
    assert(expression != nullptr);
    if (ctx->op == nullptr) {
        cout << string(_count-- * _width, ' ') << "<< visitUnaryExpression (early)\n";
        return expression;
    }
    else {
        cout << ctx->op->getText();
        auto expr = new UnaryExpressionAST(unopOfSymbol.at(ctx->op->getText()),
                                           unique_ptr<ExpressionAST>(expression));
        cout << string(_count-- * _width, ' ') << "<< visitUnaryExpression (late)\n";
        return make_any<ExpressionAST *>(expr);
    }
}

std::any ASTBuilderVisitor::visitIntegerLiteral(ValgoParser::IntegerLiteralContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitIntegerLiteral\n";
    auto value = std::stoll(ctx->INT()->getText());
    auto expr = new IntegerLiteralAST(value);
    cout << string(_count-- * _width, ' ') << "<< visitIntegerLiteral\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitArrayLiteral(ValgoParser::ArrayLiteralContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitArrayLiteral\n";
    vector<unique_ptr<ExpressionAST>> elements;
    for (auto el : ctx->expression()) {
        auto element = any_cast<ExpressionAST *>(visitExpression(el));
        assert(element != nullptr);
        elements.push_back(unique_ptr<ExpressionAST>(element));
    }
    auto expr = new ArrayLiteralAST(std::move(elements));
    cout << string(_count-- * _width, ' ') << "<< visitArrayLiteral\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitCharLiteral(ValgoParser::CharLiteralContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitCharLiteral\n";
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
    auto expr = new CharLiteralAST(valueChar);
    cout << string(_count-- * _width, ' ') << "<< visitCharLiteral\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitFloatLiteral(ValgoParser::FloatLiteralContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitFloatLiteral\n";
    auto value = std::stod(ctx->FLOAT()->getText());
    auto expr = new FloatLiteralAST(value);
    cout << string(_count-- * _width, ' ') << "<< visitFloatLiteral\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitArrayAccess(ValgoParser::ArrayAccessContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitArrayAccess\n";
    auto array =
        any_cast<ExpressionAST *>(::visitPrimaryExpression(ctx->primaryExpression(),
                                                           this));
    assert(array != nullptr);
    auto index = any_cast<ExpressionAST *>(visit(ctx->expression()));
    assert(index != nullptr);
    auto expr = new ArrayAccessAST(unique_ptr<ExpressionAST>(array),
                                   unique_ptr<ExpressionAST>(index));
    cout << string(_count-- * _width, ' ') << "<< visitArrayAccess\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitVariable(ValgoParser::VariableContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitVariable\n";
    auto expr = new VariableAST(ctx->ID()->getText());
    cout << string(_count-- * _width, ' ') << "<< visitVariable\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitParenthesized(ValgoParser::ParenthesizedContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitParenthesized\n";
    cout << string(_count-- * _width, ' ') << "<< visitParenthesized\n";
    return ValgoBaseVisitor::visitExpression(ctx->expression());
}

std::any ASTBuilderVisitor::visitCall(ValgoParser::CallContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitCall\n";
    vector<unique_ptr<ExpressionAST>> arguments;
    for (auto el : ctx->expression()) {
        auto argument = any_cast<ExpressionAST *>(visitExpression(el));
        assert(argument != nullptr);
        arguments.push_back(unique_ptr<ExpressionAST>(argument));
    }
    auto expr = new CallExpressionAST(ctx->ID()->getText(), std::move(arguments));
    cout << string(_count-- * _width, ' ') << "<< visitCall\n";
    return make_any<ExpressionAST *>(expr);
}

std::any ASTBuilderVisitor::visitIntType(ValgoParser::IntTypeContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitIntType\n";
    auto type = new IntTypeAST();
    cout << string(_count-- * _width, ' ') << "<< visitIntType\n";
    return make_any<TypeAST *>(type);
}

std::any ASTBuilderVisitor::visitCharType(ValgoParser::CharTypeContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitCharType\n";
    auto type = new CharTypeAST();
    cout << string(_count-- * _width, ' ') << "<< visitCharType\n";
    return make_any<TypeAST *>(type);
}

std::any ASTBuilderVisitor::visitFloatType(ValgoParser::FloatTypeContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitFloatType\n";
    auto type = new FloatTypeAST();
    cout << string(_count-- * _width, ' ') << "<< visitFloatType\n";
    return make_any<TypeAST *>(type);
}

std::any ASTBuilderVisitor::visitArrayType(ValgoParser::ArrayTypeContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitArrayType\n";
    auto elementType = any_cast<TypeAST *>(::visitType(ctx->type(), this));
    assert(elementType != nullptr);
    auto size = std::stoull(ctx->INT()->getText());
    auto type = new ArrayTypeAST(unique_ptr<TypeAST>(elementType), size);
    cout << string(_count-- * _width, ' ') << "<< visitArrayType\n";
    return make_any<TypeAST *>(type);
}

std::any ASTBuilderVisitor::visitDynamicArrayType(ValgoParser::DynamicArrayTypeContext *ctx)
{
    cout << string(++_count * _width, ' ') << ">> visitDynamicArrayType\n";
    auto elementType = any_cast<TypeAST *>(::visitType(ctx->type(), this));
    assert(elementType != nullptr);
    auto type = new DynamicArrayTypeAST(unique_ptr<TypeAST>(elementType));
    cout << string(_count-- * _width, ' ') << "<< visitDynamicArrayType\n";
    return make_any<TypeAST *>(type);
}
