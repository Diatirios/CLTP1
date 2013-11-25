#include "NOT.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class NOT
 * @brief NOT operator
 */

/**
 * Constructor
 * @param body text contained
 */
NOT::NOT(std::string body) : UnaryBooleanCondition(body)
{
}

/**
 * Destructor
 */
NOT::~NOT()
{
    //dtor
}

/**
 * Evaluate the not operator. It returns the opposite value
 * @return true if it is false
 */
bool NOT::eval()
{
    return !getCond()->eval();
}

