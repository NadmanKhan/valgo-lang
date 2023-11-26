#include "AST.h"

#include <cassert>

string IntTypeAST::toString()
{
    return "IntTypeAST";
}

string IntTypeAST::codegen()
{
    return "int64_t";
}

TypeKind IntTypeAST::kind() const
{
    return TypeKind::INT;
}

string IntTypeAST::name() const
{
    return "int";
}

string CharTypeAST::toString()
{
    return "CharTypeAST";
}

string CharTypeAST::codegen()
{
    return "char";
}

TypeKind CharTypeAST::kind() const
{
    return TypeKind::CHAR;
}

string CharTypeAST::name() const
{
    return "char";
}

string FloatTypeAST::toString()
{
    return "FloatTypeAST";
}

string FloatTypeAST::codegen()
{
    return "double";
}

TypeKind FloatTypeAST::kind() const
{
    return TypeKind::FLOAT;
}

string FloatTypeAST::name() const
{
    return "float";
}

string ArrayTypeAST::toString()
{
    return "ArrayTypeAST";
}

string ArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

TypeKind ArrayTypeAST::kind() const
{
    return TypeKind::ARRAY;
}

string ArrayTypeAST::name() const
{
    auto t = elementType->name();
    return t + "[" + std::to_string(size) + "]";
}

string DynamicArrayTypeAST::toString()
{
    return "DynamicArrayTypeAST";
}

string DynamicArrayTypeAST::codegen()
{
    auto t = elementType->codegen();
    return "std::vector<" + t + ">";
}

TypeKind DynamicArrayTypeAST::kind() const
{
    return TypeKind::DYNAMIC_ARRAY;
}

string DynamicArrayTypeAST::name() const
{
    auto t = elementType->name();
    return t + "[..]";
}

string SubroutineTypeAST::toString()
{
    return "SubroutineTypeAST";
}

string SubroutineTypeAST::codegen()
{
    string paramTypesStr;
    for (int i = 0; i < (int)paramTypes.size(); ++i) {
        paramTypesStr += paramTypes[i]->codegen();
        if (i != (int)paramTypes.size() - 1) {
            paramTypesStr += ", ";
        }
    }
    return "std::function<" + returnType->codegen() + "(" + paramTypesStr + ")>";
}

TypeKind SubroutineTypeAST::kind() const
{
    return TypeKind::SUBROUTINE;
}

string SubroutineTypeAST::name() const
{
    string paramTypesStr;
    for (int i = 0; i < (int)paramTypes.size(); ++i) {
        paramTypesStr += paramTypes[i]->name();
        if (i != (int)paramTypes.size() - 1) {
            paramTypesStr += ", ";
        }
    }
    return "(" + paramTypesStr + ") -> " + returnType->name();
}

TypeKind BinaryExpressionAST::typeKind() const
{
    // TODO: implement
}

string BinaryExpressionAST::toString()
{
    return "BinaryExpressionAST(" +
        symbolOfBinop.at(binop) + ", " +
        lhs->toString() + ", " +
        rhs->toString() + ")";
}

TypeKind UnaryExpressionAST::typeKind() const
{
    // TODO: implement
}

string UnaryExpressionAST::toString()
{
    return "UnaryExpressionAST(" +
        symbolOfUnop.at(unop) + ", " +
        operand->toString() + ")";
}

TypeAST *IntegerLiteralAST::type() const
{
    return new IntTypeAST();
}

