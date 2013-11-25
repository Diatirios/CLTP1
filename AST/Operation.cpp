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
 * @return left part
 */
Expression *Operation::getLeft()
{
    return m_left;
}

/**
 * Return right part
 * @return right part
 */
Expression *Operation::getRight()
{
    return m_right;
}

/**
 * Modify left part
 * @param left an expression
 * @param args a list of argument needed by the left eexpression
 */
void Operation::setLeft(Expression *left, std::list<Expression*> *args)
{
    m_left = left;
    m_leftArgs = args;
}

/**
 * Modify right part
 * @param right an expression
 * @param args a list of argument needed by the right eexpression
 */
void Operation::setRight(Expression *right, std::list<Expression*> *args)
{
    m_right = right;
    m_rightArgs = args;
}

/**
 * Modify the symbol of this operation
 * @param letter the operation symbol
 */
void Operation::setSymbol(char letter)
{
    m_symbol = letter;
}

/**
 * Return the symbol of the operation
 * @return a symbol
 */
char Operation::getSymbol()
{
    return m_symbol;
}

