#include "Variable.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Variable
 * @brief Variable operation
 */

/**
 * Constructor
 * @param body text contained
 */
Variable::Variable(std::string body) : Expression(body)
{
    setName("");
}

/**
 * Destructor
 */
Variable::~Variable()
{
    //dtor
}

std::string Variable::getName()
{
    return m_name;
}

void Variable::setName(std::string name)
{
    m_name = name;
}

/**
 * Evaluate the variable, which means it returns the stored value
 */
AbstractNumber *Variable::eval(std::list<Expression*> *args)
{
    if (GlobalContext::getInstance()->isContaining(getName()))
        return GlobalContext::getInstance()->getNumber(getName());
    return NULL;
}

