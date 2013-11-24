#include "AND.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class AND
 * @brief And combination
 */

/**
 * Constructor
 * @param body text contained in IF structure
 */
AND::AND(std::string body) : BinaryBooleanCondition(body)
{
}

/**
 * Destructor
 */
AND::~AND()
{
    //dtor
}

/**
 * Evaluate the and combination
 * @return true if combination is true
 */
bool AND::eval()
{
    return getLeft()->eval() && getRight()->eval();
}

