#include "Divide.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Divide
 * @brief Divide operation
 */

/**
 * Constructor
 * @param body text contained
 */
Divide::Divide(std::string body) : Operation(body)
{
    setSymbol('/');
}

/**
 * Destructor
 */
Divide::~Divide()
{
    //dtor
}

/**
 * Evaluate the Divide operation
 * @param args -Useless-
 * @return the result
 */
AbstractNumber* Divide::eval(std::list<Expression*> *args)
{
    AbstractNumber *n1 = NULL, *n2 = NULL;
    n1 = getLeft()->eval(m_leftArgs);
    n2 = getRight()->eval(m_rightArgs);

    if (n2->getReal() == 0.0)
        throw "divide by 0";

    if (n1->isReal() || n2->isReal())
        return Factory::createRealNumber(n1->getReal() / n2->getReal());
    else
        return Factory::createIntegerNumber(n1->getInteger() / n2->getInteger());
}

