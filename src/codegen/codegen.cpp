#include "AST.h"
#include <cassert>

string IntTypeAST::codegen(SymbolTable &table)
{
    return "int64_t";
}

string CharTypeAST::codegen(SymbolTable &table)
{
    return "char";
}

string FloatTypeAST::codegen(SymbolTable &table)
{
    return "double";
}

string ArrayTypeAST::codegen(SymbolTable &table)
{
    auto t = elementType->codegen(table);
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

string DynamicArrayTypeAST::codegen(SymbolTable &table)
{
    auto t = elementType->codegen(table);
    return "std::vector<" + t + ">";
}

string SubroutineTypeAST::codegen(SymbolTable &table)
{
    string paramsStr;
    bool isProcedure = (returnType == nullptr);
    for (int i = 0; i < (int) paramTypes.size(); ++i) {
        paramsStr += paramTypes[i]->codegen(table);
        paramsStr += " ";
        if (isProcedure) {
            paramsStr += "&";
        }
        paramsStr += paramNames[i];
        if (i != (int) paramTypes.size() - 1) {
            paramsStr += ", ";
        }
    }
    return "(" + paramsStr + ") -> " + (isProcedure ? "void" : returnType->codegen(table));
}

string UnaryExpressionAST::codegen(SymbolTable &table)
{
    switch (unop) {
        case UnOp::NOT: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::CHAR);
            return "!(" + operand->codegen(table) + ")";
        }
        case UnOp::BIT_NOT: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::CHAR);
            return "~(" + operand->codegen(table) + ")";
        }
        case UnOp::PLUS: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::FLOAT);
            return "+(" + operand->codegen(table) + ")";
        }
        case UnOp::MINUS: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::FLOAT);
            return "-(" + operand->codegen(table) + ")";
        }
        case UnOp::INT_CAST: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::CHAR
                       || operand->typeKind() == TypeKind::FLOAT);
            return "static_cast<int64_t>(" + operand->codegen(table) + ")";
        }
        case UnOp::FLOAT_CAST: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::FLOAT);
            return "static_cast<double>(" + operand->codegen(table) + ")";
        }
        case UnOp::CHAR_CAST: {
            assert(operand->typeKind() == TypeKind::INT
                       || operand->typeKind() == TypeKind::CHAR);
            return "static_cast<char>(" + operand->codegen(table) + ")";
        }
        case UnOp::LENGTH_OF: {
            assert(operand->typeKind() == TypeKind::ARRAY
                       || operand->typeKind() == TypeKind::DYNAMIC_ARRAY);
            return "static_cast<int64_t>(" + operand->codegen(table) + ").size()";
        }
        default: {
            throw std::runtime_error("Unknown unary operator");
        }
    }
}

string BinaryExpressionAST::codegen(SymbolTable &table)
{
    switch (binop) {
        case BinOp::OR: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") || (" + rhs->codegen(table) + ")";
        }
        case BinOp::AND: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") && (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_OR: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") | (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_XOR: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") ^ (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_AND: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") & (" + rhs->codegen(table) + ")";
        }
        case BinOp::EQ: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") == (" + rhs->codegen(table) + ")";
        }
        case BinOp::NE: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") != (" + rhs->codegen(table) + ")";
        }
        case BinOp::LT: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") < (" + rhs->codegen(table) + ")";
        }
        case BinOp::LE: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") <= (" + rhs->codegen(table) + ")";
        }
        case BinOp::GT: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") > (" + rhs->codegen(table) + ")";
        }
        case BinOp::GE: {
            assert(lhs->typeKind() == rhs->typeKind());
            return "(" + lhs->codegen(table) + ") >= (" + rhs->codegen(table) + ")";
        }
        case BinOp::CONCAT: {
            assert(lhs->typeKind() == TypeKind::DYNAMIC_ARRAY);
            assert(rhs->typeKind() == TypeKind::DYNAMIC_ARRAY);
            return "(" + lhs->codegen(table) + ") + (" + rhs->codegen(table) + ")";
        }
        case BinOp::APPEND: {
            assert(lhs->typeKind() == TypeKind::DYNAMIC_ARRAY);
            return "(" + lhs->codegen(table) + ").push_back(" + rhs->codegen(table) + ")";
        }
        case BinOp::SHL: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") << (" + rhs->codegen(table) + ")";
        }
        case BinOp::SHR: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") >> (" + rhs->codegen(table) + ")";
        }
        case BinOp::ADD: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::FLOAT);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") + (" + rhs->codegen(table) + ")";
        }
        case BinOp::SUB: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::FLOAT);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") - (" + rhs->codegen(table) + ")";
        }
        case BinOp::MUL: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::FLOAT);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") * (" + rhs->codegen(table) + ")";
        }
        case BinOp::DIV: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::FLOAT);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") / (" + rhs->codegen(table) + ")";
        }
        case BinOp::MOD: {
            assert(lhs->typeKind() == TypeKind::INT
                       || lhs->typeKind() == TypeKind::CHAR);
            assert(rhs->typeKind() == TypeKind::INT
                       || rhs->typeKind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") % (" + rhs->codegen(table) + ")";
        }
        default: {
            throw std::runtime_error("Unknown binary operator");
        }
    }
}

string VariableAST::codegen(SymbolTable &table)
{
    return name;
}

string IntegerLiteralAST::codegen(SymbolTable &table)
{
    return std::to_string(value) + "LL";
}

string CharLiteralAST::codegen(SymbolTable &table)
{
    if (value == '\n') {
        return "'\\n'";
    }
    else if (value == '\t') {
        return "'\\t'";
    }
    else if (value == '\r') {
        return "'\\r'";
    }
    else if (value == '\0') {
        return "'\\0'";
    }
    else if (value == '\\') {
        return "'\\\\'";
    }
    else if (value == '\'') {
        return "'\\''";
    }
    else {
        return "'" + std::string(1, value) + "'";
    }
}

string FloatLiteralAST::codegen(SymbolTable &table)
{
    return std::to_string(value);
}

string ArrayLiteralAST::codegen(SymbolTable &table)
{
    string elementsStr;
    for (int i = 0; i < (int) elements.size(); ++i) {
        elementsStr += elements[i]->codegen(table);
        if (i != (int) elements.size() - 1) {
            elementsStr += ", ";
        }
    }
    return "{" + elementsStr + "}";
}

string ArrayAccessAST::codegen(SymbolTable &table)
{
    return "(" + array->codegen(table) + ")[" + index->codegen(table) + "]";
}

string CallExpressionAST::codegen(SymbolTable &table)
{
    string argsStr;
    for (int i = 0; i < (int) args.size(); ++i) {
        argsStr += args[i]->codegen(table);
        if (i != (int) args.size() - 1) {
            argsStr += ", ";
        }
    }
    return funcName + "(" + argsStr + ")";
}

string ReturnStatementAST::codegen(SymbolTable &table)
{
    return "return " + (expression ? expression->codegen(table) : string()) + ";";
}

string PrintStatementAST::codegen(SymbolTable &table)
{
    string argsStr;
    for (int i = 0; i < (int) expressions.size(); ++i) {
        argsStr += " << ";
        argsStr += expressions[i]->codegen(table);
        if (i != (int) expressions.size() - 1) {
            argsStr += " << ' '";
        }
    }
    return "std::cout" + argsStr + " << '\n';";
}

string VarDeclarationStatementAST::codegen(SymbolTable &table)
{
    return type->codegen(table) + " "
        + name + " = "
        + value->codegen(table) + ";";
}

string AssignmentStatementAST::codegen(SymbolTable &table)
{
    return name + " = " + value->codegen(table) + ";";
}

string CallStatementAST::codegen(SymbolTable &table)
{
    // remember to make lvalues to store the temporary args
    string declsStr;
    string argsStr;
    for (int i = 0; i < (int) args.size(); ++i) {
        if (dynamic_cast<VariableAST *>(args[i].get())) {
            argsStr += args[i]->codegen(table);
        }
        else {
            string varName = "_var" + std::to_string(i);
            declsStr += "auto " + varName + " = " + args[i]->codegen(table) + ";\n";
            argsStr += varName;
        }
        if (i != (int) args.size() - 1) {
            argsStr += ", ";
        }
    }
    return "{\n" + declsStr + procName + "(" + argsStr + ");\n}";
}

string BlockStatementAST::codegen(SymbolTable &table)
{
    string stmtsStr;
    for (int i = 0; i < (int) statements.size(); ++i) {
        stmtsStr += statements[i]->codegen(table);
        stmtsStr += "\n";
    }
    return "{\n" + stmtsStr + "}";
}

string IfStatementAST::codegen(SymbolTable &table)
{
    string result = "if (" + ifCondition->codegen(table) + ") " + ifBlock->codegen(table);
    for (int i = 0; i < (int)elseIfConditions.size(); ++i) {
        result += " else if (" + elseIfConditions[i]->codegen(table) + ") " + elseIfBlocks[i]->codegen(table);
    }
    if (elseBlock) {
        result += " else " + elseBlock->codegen(table);
    }
    return result;
}

string WhileStatementAST::codegen(SymbolTable &table)
{
    return "while (" + condition->codegen(table) + ") " + block->codegen(table);
}

string SubroutineAST::codegen(SymbolTable &table)
{
    if (name == "main") {
        return "int main(int argc, char **argv) " + block->codegen(table);
    }
    return "auto " + name + subroutineType->codegen(table) + " " + block->codegen(table);
}

string ProgramAST::codegen(SymbolTable &table)
{
    string result = "#include <bits/stdc++.h>\n\n";
    for (int i = 0; i < (int)subroutines.size(); ++i) {
        result += subroutines[i]->codegen(table);
        result += "\n\n";
    }
    return result;
}

