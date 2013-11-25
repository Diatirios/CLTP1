#include "BooleanCondition.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class BooleanCondition
 * @brief Abstract boolean condition. It should be an expression but is is not to simplify calculus
 */

/**
 * Constructor
 * @param body text
 */
BooleanCondition::BooleanCondition(std::string body)
{
    setBody(body);
}

/**
 * Destructor
 */
BooleanCondition::~BooleanCondition()
{

}

/**
 * Modify body text
 * @param body body text
 */
void BooleanCondition::setBody(std::string body)
{
    m_body = body;
}

/**
 * Return body text
 * @return text
 */
std::string BooleanCondition::getBody()
{
    return m_body;
}

