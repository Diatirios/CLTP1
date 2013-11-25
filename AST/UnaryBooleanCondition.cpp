#include "UnaryBooleanCondition.h"


/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class UnaryBooleanCondition
 * @brief Represents an unary boolean condition. It contains one member.
 */

/**
 * Constructor
 * @param body text contained
 */
UnaryBooleanCondition::UnaryBooleanCondition(std::string body) : BooleanCondition(body)
{
    m_bcond = NULL;
}

/**
 * Destructor
 */
UnaryBooleanCondition::~UnaryBooleanCondition()
{
    delete m_bcond;
}

/**
 * Modify the member
 * @param bcond a boolean condition
 */
void UnaryBooleanCondition::setBoooleanCondition(BooleanCondition *bcond)
{
    m_bcond = bcond;
}

/**
 * Return the member
 * @return the member
 */
BooleanCondition *UnaryBooleanCondition::getCond()
{
    return m_bcond;
}

