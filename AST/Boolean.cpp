#include "Boolean.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Boolean
 * @brief Represents a boolean object (Necesssary for construction of AST)
 */

/**
 * Constructor
 * @param val a bool value
 */
Boolean::Boolean(bool val) : UnaryBooleanCondition("")
{
    m_val = val;
    setBody(val ? "true" : "false");
}

/**
 * Destructor
 */
Boolean::~Boolean()
{
    //dtor
}

/**
 * Return the boolean value
 */
bool Boolean::eval()
{
    return m_val;
}

