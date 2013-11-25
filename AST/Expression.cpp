#include "Expression.h"
#include <Number.h>

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Expression
 * @brief Generalized representation of an expression
 */

/**
 * Constructor
 * @param body text contained
 */
Expression::Expression(std::string body)
{
    setBody(body);
}

/**
 * Destructor
 */
Expression::~Expression()
{
    //dtor
}

/**
 * Return the body text
 * @return a string
 */
std::string Expression::getBody()
{
    return m_body;
}

/**
 * Modify the body text
 * @param body a text
 */
void Expression::setBody(std::string body)
{
    m_body = body;
}

