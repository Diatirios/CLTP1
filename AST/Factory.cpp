#include "Factory.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Factory
 * @brief Factory for creation of all part of the AST
 */


Operation *Factory::createAddOperation(std::string body)
{
    return new Add(body);
}

Operation *Factory::createDivideOperation(std::string body)
{
    return new Divide(body);
}

Operation *Factory::createModuloOperation(std::string body)
{
    return new Modulo(body);
}

Operation *Factory::createSubstractOperation(std::string body)
{
    return new Substract(body);
}

Operation *Factory::createTimeOperation(std::string body)
{
    return new Time(body);
}

Number *Factory::createIntegerNumber(int val)
{
    return new Number(val);
}

Number *Factory::createRealNumber(float val)
{
    return new Number(val);
}

Number *Factory::createNumber(std::string val)
{
    return new Number(val);
}

Context *Factory::createNewLocalContext()
{
    return new Context;
}

BinaryBooleanCondition *Factory::createNewANDOperation(std::string body)
{
    return new AND(body);
}

BinaryBooleanCondition *Factory::createNewOROperation(std::string body)
{
    return new OR(body);
}

UnaryBooleanCondition *Factory::createNewNOTOperation(std::string body)
{
    return new NOT(body);
}

UnaryBooleanCondition *Factory::createNewBoolean(bool val)
{
    return new Boolean(val);
}

Variable *Factory::createNewVariable(std::string body)
{
    return new Variable(body);
}

Function *Factory::createNewFunction(std::string body, std::string name)
{
    return new Function(body, name);
}

Expression *Factory::createNewIf(std::string body)
{
    return new IfThenElse(body);
}

BinaryNumberCondition *Factory::createNewLessThanOrEqual(std::string body)
{
    return new LessThanOrEqual(body);
}


