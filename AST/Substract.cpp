#include "Substract.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Substract
 * @brief Substract operation
 */

/**
 * Constructor
 * @param body text contained
 */
Substract::Substract(std::string body) : Operation(body)
{
    setSymbol('-');
}

/**
 * Destructor
 */
Substract::~Substract()
{
    //dtor
}

/**
 * Evaluate the Substract operation
 * @param args -Useless-
 * @return the result
 */
AbstractNumber* Substract::eval(std::list<Expression*> *args)
{
    AbstractNumber *n1 = NULL, *n2 = NULL;
    n1 = getLeft()->eval(m_leftArgs);
    n2 = getRight()->eval(m_rightArgs);

    if (n1->isReal() || n2->isReal())
        return Factory::createRealNumber(n1->getReal() - n2->getReal());
    else
        return Factory::createIntegerNumber(n1->getInteger() - n2->getInteger());
}


