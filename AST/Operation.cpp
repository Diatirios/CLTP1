#include "Operation.h"
/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Operation
 * @brief AST Operation
 */

/**
 * Constructor
 * @param body text contained
 */
Operation::Operation(std::string body) : Expression(body)
{
    m_left = 0;
    m_right = 0;
    m_leftArgs = NULL;
    m_rightArgs = NULL;
}

/**
 * Destructor
 */
Operation::~Operation()
{
    delete m_left;
    delete m_right;
}

/**
 * Return left part
 */
Expression *Operation::getLeft()
{
    return m_left;
}

/**
 * Return right part
 */
Expression *Operation::getRight()
{
    return m_right;
}

/**
 * Modify left part
 */
void Operation::setLeft(Expression *left, std::list<Expression*> *args)
{
    m_left = left;
    m_leftArgs = args;
}

/**
 * Modify right part
 */
void Operation::setRight(Expression *right, std::list<Expression*> *args)
{
    m_right = right;
    m_rightArgs = args;
}

void Operation::setSymbol(char letter)
{
    m_symbol = letter;
}

char Operation::getSymbol()
{
    return m_symbol;
}

