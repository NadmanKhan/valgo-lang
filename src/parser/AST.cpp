#include "AST.h"

#include <cassert>

string IntTypeAST::toString()
{
    return "IntTypeAST";
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

TypeKind IntegerLiteralAST::typeKind() const
{
    return TypeKind::INT;
}

