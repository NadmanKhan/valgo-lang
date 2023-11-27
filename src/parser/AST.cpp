#include "AST.h"

#define NDEBUG
#include <cassert>

// TypeAST ---------------------------------------------------------------------

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

bool IntTypeAST::operator==(const TypeAST &other) const
{
    return other.kind() == TypeKind::INT;
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

bool CharTypeAST::operator==(const TypeAST &other) const
{
    return other.kind() == TypeKind::CHAR;
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

bool FloatTypeAST::operator==(const TypeAST &other) const
{
    return other.kind() == TypeKind::FLOAT;
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
    auto t = m_elementType->name();
    return t + "[" + std::to_string(size) + "]";
}

bool ArrayTypeAST::operator==(const TypeAST &other) const
{
    auto otherArrayType = dynamic_cast<const ArrayTypeAST *>(&other);
    if (otherArrayType == nullptr) {
        return false;
    }
    return *m_elementType == *otherArrayType->m_elementType
        && size == otherArrayType->size;
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
    auto t = m_elementType->name();
    return t + "[..]";
}

bool DynamicArrayTypeAST::operator==(const TypeAST &other) const
{
    auto otherArrayType = dynamic_cast<const DynamicArrayTypeAST *>(&other);
    if (otherArrayType == nullptr) {
        return false;
    }
    return *m_elementType == *otherArrayType->m_elementType;
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
    bool isProcedure = m_returnType == nullptr;
    string paramTypesStr;
    for (int i = 0; i < (int) m_paramTypes.size(); ++i) {
        if (isProcedure) {
            paramTypesStr += "$";
        }
        paramTypesStr += m_paramTypes[i]->name();
        if (i != (int) m_paramTypes.size() - 1) {
            paramTypesStr += ", ";
        }
    }
    if (m_returnType == nullptr) {
        // procedure
        return "@ " + paramTypesStr;
    }
    else {
        // function
        return "(" + paramTypesStr + ") -> " + m_returnType->name();
    }
}

bool SubroutineTypeAST::operator==(const TypeAST &other) const
{
    auto otherSubroutineType = dynamic_cast<const SubroutineTypeAST *>(&other);
    if (otherSubroutineType == nullptr) {
        return false;
    }
    if (m_returnType == nullptr) {
        if (otherSubroutineType->m_returnType != nullptr) {
            return false;
        }
    }
    else {
        if (otherSubroutineType->m_returnType == nullptr) {
            return false;
        }
        if (*m_returnType != *otherSubroutineType->m_returnType) {
            return false;
        }
    }
    if (m_paramTypes.size() != otherSubroutineType->m_paramTypes.size()) {
        return false;
    }
    for (int i = 0; i < (int) m_paramTypes.size(); ++i) {
        if (*m_paramTypes[i] != *otherSubroutineType->m_paramTypes[i]) {
            return false;
        }
    }
    return true;
}

// ExpressionAST ---------------------------------------------------------------------

string UnaryExpressionAST::toString()
{
    return "UnaryExpressionAST(" +
        symbolOfUnop.at(unop) + ", " +
        operand->toString() + ")";
}

shared_ptr<TypeAST> UnaryExpressionAST::type() const
{
    auto operandType = operand->type();
    auto kind = operandType->kind();
    switch (unop) {
        case NONE: {
            return operandType;
        }
        case NOT: {
            assert(kind == TypeKind::INT
                       || kind == TypeKind::CHAR);
            return make_unique<IntTypeAST>();
        }
        case BIT_NOT: {
            assert(kind == TypeKind::INT);
            return make_unique<IntTypeAST>();
        }
        case PLUS:
        case MINUS: {
            assert(kind == TypeKind::INT
                       || kind == TypeKind::FLOAT);
            return operandType;
        }
        case INT_CAST: {
            assert(kind == TypeKind::INT
                       || kind == TypeKind::CHAR
                       || kind == TypeKind::FLOAT);
            return make_unique<IntTypeAST>();
        }
        case CHAR_CAST: {
            assert(kind == TypeKind::INT
                       || kind == TypeKind::CHAR
                       || kind == TypeKind::FLOAT);
            return make_unique<CharTypeAST>();
        }
        case FLOAT_CAST: {
            assert(kind == TypeKind::INT
                       || kind == TypeKind::CHAR
                       || kind == TypeKind::FLOAT);
            return make_unique<FloatTypeAST>();
        }
        case LENGTH_OF: {
            assert(kind == TypeKind::ARRAY
                       || kind == TypeKind::DYNAMIC_ARRAY);
            return make_unique<IntTypeAST>();
        }
        default: {
            assert(false);
        }
    }
    return {};
}

string BinaryExpressionAST::toString()
{
    return "BinaryExpressionAST(" +
        symbolOfBinop.at(binop) + ", " +
        lhs->toString() + ", " +
        rhs->toString() + ")";
}

shared_ptr<TypeAST> BinaryExpressionAST::type() const
{
    auto lhsType = lhs->type();
    auto rhsType = rhs->type();
    auto lhsKind = lhsType->kind();
    auto rhsKind = rhsType->kind();
    switch (binop) {
        case OR:
        case AND: {
            assert(lhsKind == TypeKind::INT
                       || lhsKind == TypeKind::CHAR);
            assert(rhsKind == TypeKind::INT
                       || rhsKind == TypeKind::CHAR);
            return make_unique<IntTypeAST>();
        }
        case BIT_OR:
        case BIT_XOR:
        case BIT_AND: {
            assert(lhsKind == TypeKind::INT);
            assert(rhsKind == TypeKind::INT);
            return make_unique<IntTypeAST>();
        }
        case EQ:
        case NE:
        case LT:
        case GT:
        case LE:
        case GE: {
            assert(lhsKind == rhsKind);
            return make_unique<IntTypeAST>();
        }
        case CONCAT: {
            assert(lhsKind == TypeKind::DYNAMIC_ARRAY);
            assert(rhsKind == TypeKind::DYNAMIC_ARRAY);
            auto lhsArrayType = dynamic_cast<DynamicArrayTypeAST *>(lhsType.get());
            auto rhsArrayType = dynamic_cast<DynamicArrayTypeAST *>(rhsType.get());
            assert(lhsArrayType != nullptr);
            assert(rhsArrayType != nullptr);
            assert(*lhsArrayType == *rhsArrayType);
            return make_unique<DynamicArrayTypeAST>(lhsArrayType->elementType());
        }
        case APPEND: {
            assert(lhsKind == TypeKind::DYNAMIC_ARRAY);
            auto lhsArrayType = dynamic_cast<DynamicArrayTypeAST *>(lhsType.get());
            assert(*rhsType == *lhsArrayType->elementType());
            return lhsType;
        }
        case SHL:
        case SHR: {
            assert(lhsKind == TypeKind::INT);
            assert(rhsKind == TypeKind::INT);
            return make_unique<IntTypeAST>();
        }
        case ADD:
        case SUB:
        case MUL:
        case DIV: {
            assert(lhsKind == TypeKind::INT
                       || lhsKind == TypeKind::FLOAT);
            assert(rhsKind == TypeKind::INT
                       || rhsKind == TypeKind::FLOAT);
            if (lhsKind == TypeKind::FLOAT
                || rhsKind == TypeKind::FLOAT) {
                return make_unique<FloatTypeAST>();
            }
            else {
                return make_unique<IntTypeAST>();
            }
        }
        case MOD: {
            assert(lhsKind == TypeKind::INT);
            assert(rhsKind == TypeKind::INT);
            return make_unique<IntTypeAST>();
        }
        default: {
            assert(false);
        }
    }
    return {};
}

string VariableAST::toString()
{
    return "IdentifierExpressionAST(" +
        name + ")";
}

string IntegerLiteralAST::toString()
{
    return "IntegerLiteralAST(" +
        std::to_string(value) + ")";
}

shared_ptr<TypeAST> VariableAST::type() const
{
    return {}; // TODO
}

string CharLiteralAST::toString()
{
    return "CharLiteralAST(" +
        std::to_string(value) + ")";
}

shared_ptr<TypeAST> CharLiteralAST::type() const
{
    return make_unique<CharTypeAST>();
}

string FloatLiteralAST::toString()
{
    return "FloatLiteralAST(" +
        std::to_string(value) + ")";
}

shared_ptr<TypeAST> FloatLiteralAST::type() const
{
    return make_unique<FloatTypeAST>();
}

shared_ptr<TypeAST> IntegerLiteralAST::type() const
{
    return make_unique<IntTypeAST>();
}

string ArrayLiteralAST::toString()
{
    string elementsStr;
    for (int i = 0; i < (int) elements.size(); ++i) {
        elementsStr += elements[i]->toString();
        if (i != (int) elements.size() - 1) {
            elementsStr += ", ";
        }
    }
    return "ArrayLiteralAST(" +
        elementsStr + ")";
}

shared_ptr<TypeAST> ArrayLiteralAST::type() const
{
    assert(!elements.empty());
    auto elementType = elements[0]->type();
    for (int i = 1; i < (int) elements.size(); ++i) {
        assert(*elements[i]->type() == *elementType);
    }
    return make_unique<DynamicArrayTypeAST>(elementType);
}

string ArrayAccessAST::toString()
{
    return "ArrayAccessAST(" +
        array->toString() + ", " +
        index->toString() + ")";
}

shared_ptr<TypeAST> ArrayAccessAST::type() const
{
    auto arrayType = array->type();
    auto arrayKind = arrayType->kind();
    assert(arrayKind == TypeKind::ARRAY
               || arrayKind == TypeKind::DYNAMIC_ARRAY);
    auto a = dynamic_cast<ArrayTypeAST *>(arrayType.get());
    assert(a != nullptr);
    return a->elementType();
}

string CallExpressionAST::toString()
{
    string argsStr;
    for (int i = 0; i < (int) args.size(); ++i) {
        argsStr += args[i]->toString();
        if (i != (int) args.size() - 1) {
            argsStr += ", ";
        }
    }
    return "FunctionCallAST(" +
        funcName + ", " +
        argsStr + ")";
}

shared_ptr<TypeAST> CallExpressionAST::type() const
{
    return {}; // TODO
}

// StatementAST ---------------------------------------------------------------------

string ReturnStatementAST::toString()
{
    return "ReturnStatementAST(" +
        (expression == nullptr ? "" : expression->toString()) + ")";
}

string VarDeclarationStatementAST::toString()
{
    return "VarDeclarationStatementAST(" +
        name + ", " +
        type->toString() + ")";
}

string AssignmentStatementAST::toString()
{
    return "AssignmentStatementAST(" +
        name + ", " +
        value->toString() + ")";
}

string PrintStatementAST::toString()
{
    return "PrintStatementAST("")";
}

string CallStatementAST::toString()
{
    return "CallStatementAST(" +
        procName + ")";
}

string BlockStatementAST::toString()
{
    string statementsStr;
    for (int i = 0; i < (int) statements.size(); ++i) {
        statementsStr += statements[i]->toString();
        if (i != (int) statements.size() - 1) {
            statementsStr += ", ";
        }
    }
    return "BlockStatementAST(" +
        statementsStr + ")";
}

string IfStatementAST::toString()
{
    return "IfStatementAST(" ")";
}

string WhileStatementAST::toString()
{
    return "WhileStatementAST(" ")";
}

string SubroutineAST::toString()
{
    string paramsStr;
    auto paramNames = subroutineType->paramNames();
    for (int i = 0; i < (int)paramNames.size(); ++i) {
        paramsStr += paramNames[i];
        if (i != (int) paramNames.size() - 1) {
            paramsStr += ", ";
        }
    }
    return "SubroutineAST(" +
        name + ", " +
        paramsStr + ")";
}

string ProgramAST::toString()
{
    string subroutinesStr;
    for (int i = 0; i < (int) subroutines.size(); ++i) {
        subroutinesStr += subroutines[i]->toString();
        if (i != (int) subroutines.size() - 1) {
            subroutinesStr += ", ";
        }
    }
    return "ProgramAST(" +
        subroutinesStr + ")";
}

// codegen ---------------------------------------------------------------------


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
    auto t = m_elementType->codegen(table);
    return "std::array<" + t + ", " + std::to_string(size) + ">";
}

string DynamicArrayTypeAST::codegen(SymbolTable &table)
{
    auto t = m_elementType->codegen(table);
    return "std::vector<" + t + ">";
}

string SubroutineTypeAST::codegen(SymbolTable &table)
{
    string paramsStr;
    bool isProcedure = (m_returnType == nullptr);
    for (int i = 0; i < (int) m_paramTypes.size(); ++i) {
        paramsStr += m_paramTypes[i]->codegen(table);
        paramsStr += " ";
        if (isProcedure) {
            paramsStr += "&";
        }
        paramsStr += m_paramNames[i];
        if (i != (int) m_paramTypes.size() - 1) {
            paramsStr += ", ";
        }
    }
    return "(" + paramsStr + ") -> " + (isProcedure ? "void" : m_returnType->codegen(table));
}

string UnaryExpressionAST::codegen(SymbolTable &table)
{
    switch (unop) {
        case UnOp::NONE: {
            return operand->codegen(table);
        }
        case UnOp::NOT: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::CHAR);
            return "!(" + operand->codegen(table) + ")";
        }
        case UnOp::BIT_NOT: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::CHAR);
            return "~(" + operand->codegen(table) + ")";
        }
        case UnOp::PLUS: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::FLOAT);
            return "+(" + operand->codegen(table) + ")";
        }
        case UnOp::MINUS: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::FLOAT);
            return "-(" + operand->codegen(table) + ")";
        }
        case UnOp::INT_CAST: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::CHAR
                       || operand->type()->kind() == TypeKind::FLOAT);
            return "static_cast<int64_t>(" + operand->codegen(table) + ")";
        }
        case UnOp::FLOAT_CAST: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::FLOAT);
            return "static_cast<double>(" + operand->codegen(table) + ")";
        }
        case UnOp::CHAR_CAST: {
            assert(operand->type()->kind() == TypeKind::INT
                       || operand->type()->kind() == TypeKind::CHAR);
            return "static_cast<char>(" + operand->codegen(table) + ")";
        }
        case UnOp::LENGTH_OF: {
            assert(operand->type()->kind() == TypeKind::ARRAY
                       || operand->type()->kind() == TypeKind::DYNAMIC_ARRAY);
            return "static_cast<int64_t>(" + operand->codegen(table) + ".size())";
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
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") || (" + rhs->codegen(table) + ")";
        }
        case BinOp::AND: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") && (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_OR: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") | (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_XOR: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") ^ (" + rhs->codegen(table) + ")";
        }
        case BinOp::BIT_AND: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") & (" + rhs->codegen(table) + ")";
        }
        case BinOp::EQ: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") == (" + rhs->codegen(table) + ")";
        }
        case BinOp::NE: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") != (" + rhs->codegen(table) + ")";
        }
        case BinOp::LT: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") < (" + rhs->codegen(table) + ")";
        }
        case BinOp::LE: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") <= (" + rhs->codegen(table) + ")";
        }
        case BinOp::GT: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") > (" + rhs->codegen(table) + ")";
        }
        case BinOp::GE: {
            assert(lhs->type()->kind() == rhs->type()->kind());
            return "(" + lhs->codegen(table) + ") >= (" + rhs->codegen(table) + ")";
        }
        case BinOp::CONCAT: {
            assert(lhs->type()->kind() == TypeKind::DYNAMIC_ARRAY);
            assert(rhs->type()->kind() == TypeKind::DYNAMIC_ARRAY);
            return "valgo::concat(" + lhs->codegen(table) + ", " + rhs->codegen(table) + ")";
        }
        case BinOp::APPEND: {
            assert(lhs->type()->kind() == TypeKind::DYNAMIC_ARRAY);
            return "valgo::append(" + lhs->codegen(table) + ", " + rhs->codegen(table) + ")";
        }
        case BinOp::SHL: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") << (" + rhs->codegen(table) + ")";
        }
        case BinOp::SHR: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
            return "(" + lhs->codegen(table) + ") >> (" + rhs->codegen(table) + ")";
        }
        case BinOp::ADD: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::FLOAT);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") + (" + rhs->codegen(table) + ")";
        }
        case BinOp::SUB: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::FLOAT);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") - (" + rhs->codegen(table) + ")";
        }
        case BinOp::MUL: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::FLOAT);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") * (" + rhs->codegen(table) + ")";
        }
        case BinOp::DIV: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::FLOAT);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::FLOAT);
            return "(" + lhs->codegen(table) + ") / (" + rhs->codegen(table) + ")";
        }
        case BinOp::MOD: {
            assert(lhs->type()->kind() == TypeKind::INT
                       || lhs->type()->kind() == TypeKind::CHAR);
            assert(rhs->type()->kind() == TypeKind::INT
                       || rhs->type()->kind() == TypeKind::CHAR);
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
    return "std::cout" + argsStr + " << '\\n';";
}

string VarDeclarationStatementAST::codegen(SymbolTable &table)
{
    table[name].push_back(unique_ptr<TypeAST>(type.get()));
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
            declsStr += args[i]->type()->codegen(table) + " " +
                varName + " = " + args[i]->codegen(table) + ";\n";
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
    else {
//    return "auto " + name + subroutineType->codegen(table) + " " + block->codegen(table);
        string result;
        if (subroutineType->returnType() == nullptr) {
            result += "void";
        } else {
            result += subroutineType->returnType()->codegen(table);
        }
        result += " " + name + subroutineType->codegen(table);
        // remove the "-> void" part
        while (result.back() != ')') {
            result.pop_back();
        }
        result += " " + block->codegen(table);
        return result;
    }
}

string ProgramAST::codegen(SymbolTable &table)
{
    string result;
    result += "#include <iostream>\n";
    result += "#include <vector>\n";
    result += "#include <array>\n";
    result += "#include <string>\n";
    result += "\n";
    {
        // some functions needed by valgo semantics
        result += "namespace valgo {\n";
        result += "template <typename T>\n";
        result += "std::vector<T> append(std::vector<T> a, const T &b) {\n";
        result += "    a.push_back(b);\n";
        result += "    return a;\n";
        result += "}\n";
        result += "template <typename T>\n";
        result += "std::vector<T> concat(std::vector<T> a, std::vector<T> b) {\n";
        result += "    a.insert(a.end(), b.begin(), b.end());\n";
        result += "    return a;\n";
        result += "}\n";
        result += "} // namespace valgo\n";
        result += "\n";
    }
    for (int i = 0; i < (int)subroutines.size(); ++i) {
        result += subroutines[i]->codegen(table);
        result += "\n\n";
    }
    return result;
}

#undef NDEBUG
