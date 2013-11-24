#include "LessThanOrEqual.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class LessThanOrEqual
 * @brief AST '<=' boolean expression
 */

/**
 * Constructor
 * @param body text
 */
LessThanOrEqual::LessThanOrEqual(std::string body) : BinaryNumberCondition(body)
{
}

/**
 * Destructor
 */
LessThanOrEqual::~LessThanOrEqual()
{
    //dtor
}

/**
 * Evaluate the difference between left member and right member
 * @return return true if left <= right
 */
bool LessThanOrEqual::eval()
{
    AbstractNumber *n1 = getLeft()->eval(NULL);
    AbstractNumber *n2 = getRight()->eval(NULL);
    return  n1->getReal() <= n2->getReal();
}

