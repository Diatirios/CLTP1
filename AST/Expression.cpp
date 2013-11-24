#include "Expression.h"
#include <Number.h>

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Add
 * @brief Add operation
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

std::string Expression::getBody()
{
    return m_body;
}

void Expression::setBody(std::string body)
{
    m_body = body;
}

