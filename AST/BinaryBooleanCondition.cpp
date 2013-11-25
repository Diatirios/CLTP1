#include "BinaryBooleanCondition.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class BinaryBooleanCondition
 * @brief Represents a binary boolean condition. It contains two members.
 */

/**
 * Constructor
 * @param body text contained
 */
BinaryBooleanCondition::BinaryBooleanCondition(std::string body) : BooleanCondition(body)
{
    m_right = NULL;
    m_left = NULL;
}

/**
 * Destructor
 */
BinaryBooleanCondition::~BinaryBooleanCondition()
{
    delete m_right;
    delete m_left;
}

/**
 * Return left part of the condition
 * @return left part
 */
BooleanCondition *BinaryBooleanCondition::getLeft()
{
    return m_left;
}

/**
 * Return right part of the condition
 * @return right part
 */
BooleanCondition *BinaryBooleanCondition::getRight()
{
    return m_right;
}

/**
 * Modify left part
 * @param bond a boolean condition
 */
void BinaryBooleanCondition::setLeft(BooleanCondition *bcond)
{
    m_left = bcond;
}

/**
 * Modify right part
 * @param bond a boolean condition
 */
void BinaryBooleanCondition::setRight(BooleanCondition *bcond)
{
    m_right = bcond;
}

