#include "BinaryNumberCondition.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class BinaryNumberCondition
 * @brief Represents a boolean condition in whiwh each member is numeral
 */

/**
 * Constructor
 * @param body text contained
 */
BinaryNumberCondition::BinaryNumberCondition(std::string body) : BooleanCondition(body)
{
    m_left = NULL;
    m_right = NULL;
}

/**
 * Destructor
 */
BinaryNumberCondition::~BinaryNumberCondition()
{
    delete m_left;
    delete m_right;
}

/**
 * Return left part of the condition
 * @return left part
 */
Expression* BinaryNumberCondition::getLeft()
{
    return m_left;
}

/**
 * Return right part of the condition
 * @return right part
 */
Expression* BinaryNumberCondition::getRight()
{
    return m_right;
}

/**
 * Modify left part
 * @param expr an expression (not boolean one)
 */
void BinaryNumberCondition::setLeft(Expression* expr)
{
    m_left = expr;
}

/**
 * Modify right part
 * @param expr an expression (not boolean one)
 */
void BinaryNumberCondition::setRight(Expression* expr)
{
    m_right = expr;
}

