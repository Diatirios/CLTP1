#include "OR.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class OR
 * @brief Or combination
 */

/**
 * Constructor
 * @param body text contained in IF structure
 */
OR::OR(std::string body) : BinaryBooleanCondition(body)
{
}

/**
 * Destructor
 */
OR::~OR()
{
    //dtor
}

/**
 * Evaluate the or combination
 * @return true if at least one member is true
 */
bool OR::eval()
{
    return getLeft()->eval() || getRight()->eval();
}

