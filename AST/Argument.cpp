#include "Argument.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Function
 * @brief Represents an AST function
 */

/**
 * Constructor
 * @param body text contained
 */
Argument::Argument(std::string body) : Expression(body)
{
}

Argument::~Argument()
{
    //dtor
}

AbstractNumber *Argument::eval(std::list<Expression* >* args)
{
    return GlobalContext::getInstance()->getNumber(getBody());
}
