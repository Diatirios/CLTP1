#include "Time.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Time
 * @brief Time operation
 */

/**
 * Constructor
 * @param body text contained
 */
Time::Time(std::string body) : Operation(body)
{
    setSymbol('*');
}

/**
 * Destructor
 */
Time::~Time()
{
    //dtor
}

/**
 * Evaluate the Time operation
 * @param args -Useless-
 * @return the result
 */
AbstractNumber* Time::eval(std::list<Expression*> *args)
{
    AbstractNumber *n1 = NULL, *n2 = NULL;
    n1 = getLeft()->eval(m_leftArgs);
    n2 = getRight()->eval(m_rightArgs);

    if (n1->isReal() || n2->isReal())
        return Factory::createRealNumber(n1->getReal() * n2->getReal());
    else
        return Factory::createIntegerNumber(n1->getInteger() * n2->getInteger());
}

