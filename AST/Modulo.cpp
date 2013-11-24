#include "Modulo.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Modulo
 * @brief Modulo operation
 */

/**
 * Constructor
 * @param body text contained
 */
Modulo::Modulo(std::string body) : Operation(body)
{
    setSymbol('%');
}

/**
 * Destructor
 */
Modulo::~Modulo()
{
    //dtor
}

/**
 * Evaluate the Modulo operation
 */
AbstractNumber* Modulo::eval(std::list<Expression*> *args)
{
    AbstractNumber *n1 = NULL, *n2 = NULL;
    n1 = getLeft()->eval(args);
    n2 = getRight()->eval(args);

    if (n1->isReal() || n2->isReal())
        throw "Modulo with real is impossible";
    else
        return Factory::createIntegerNumber(n1->getInteger() % n2->getInteger());
}

