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
 * @return left part
 */
Expression *IfThenElse::getLeft()
{
    return m_left;
}

/**
 * Return the right expression
 * @return right part
 */
Expression *IfThenElse::getRight()
{
    return m_right;
}

/**
 * Return the condition
 * @return a boolean condition
 */
BooleanCondition *IfThenElse::getCondition()
{
    return m_condition;
}

/**
 * Modify the left expression
 * @param left left part
 */
void IfThenElse::setLeft(::Expression *left)
{
    m_left = left;
}

/**
 * Modify the right expression
 * @param right right part
 */
void IfThenElse::setRight(::Expression *right)
{
    m_right = right;
}

/**
 * Modify the boolean condition
 * @param condition a boolean condition
 */
void IfThenElse::setBoolCondition(BooleanCondition *condition)
{
    m_condition = condition;
}

/**
 * Evaluate the if
 * @param args a list of arguments - Useless here
 * @return the result of the evaluation
 */
AbstractNumber *IfThenElse::eval(std::list<Expression*> *args)
{
    return getCondition()->eval() ? getLeft()->eval(args) : getRight()->eval(args);
}

