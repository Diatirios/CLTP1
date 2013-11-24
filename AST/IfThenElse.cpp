#include "IfThenElse.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class IfThenElse
 * @brief If expression
 */

/**
 * Constructor
 * @param body text contained
 */
IfThenElse::IfThenElse(std::string body) : Expression(body)
{
    m_left = NULL;
    m_right = NULL;
    m_condition = NULL;
}

/**
 * Destructor
 */
IfThenElse::~IfThenElse()
{
    delete m_condition;
    delete m_left;
    delete m_right;
}

/**
 * Return the left expression
 */
Expression *IfThenElse::getLeft()
{
    return m_left;
}

/**
 * Return the right expression
 */
Expression *IfThenElse::getRight()
{
    return m_right;
}

/**
 * Return the condition
 */
BooleanCondition *IfThenElse::getCondition()
{
    return m_condition;
}

/**
 * Return the left expression
 */
void IfThenElse::setLeft(::Expression *left)
{
    m_left = left;
}

/**
 * Return the right expression
 */
void IfThenElse::setRight(::Expression *right)
{
    m_right = right;
}

/**
 * Return the boolean condition
 */
void IfThenElse::setBoolCondition(BooleanCondition *condition)
{
    m_condition = condition;
}

/**
 * Evaluate the if
 */
AbstractNumber *IfThenElse::eval(std::list<Expression*> *args)
{
    return getCondition()->eval() ? getLeft()->eval(args) : getRight()->eval(args);
}

