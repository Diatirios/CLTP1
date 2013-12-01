#include "Context.h"
#include "Factory.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class Context
 * @brief A context is a mix between the stack and the heap in which variables are stored
 */

/**
 * Constructor
 */
Context::Context()
{
    m_localContext = NULL;
    m_map = new std::map<std::string, Number>;
}

/**
 * Destructor
 */
Context::~Context()
{
    delete m_map;
}

/**
 * Remove the youngest context
 * @return true on success
 */
bool Context::deleteLastLocalContext()
{
    if (hasNextLocalContext())
    {
        if (m_localContext->deleteLastLocalContext())
            return true;
        else
        {
            delete m_localContext;
            m_localContext = NULL;
            return true;
        }
    }
    return false;
}

/**
 * Create a new context
 */
void Context::addNewLocalContest()
{
    if (hasNextLocalContext())
        m_localContext->addNewLocalContest();
    else
        m_localContext = Factory::createNewLocalContext();
}

/**
 * Test if there is a next context
 * @return true if present
 */
bool Context::hasNextLocalContext()
{
    return m_localContext != NULL;
}

/**
 * Add a new variable in the youngest context
 * @param name variable's name
 * @param number variable's value
 */
void Context::addNewVariableInLastContext(std::string name, Number* number)
{
    if (hasNextLocalContext())
        m_localContext->addNewVariableInLastContext(name, number);
    else
        m_map->insert(std::pair<std::string, Number>(name, *number));
}

/**
 * Test the presence of a variable in contexts
 * @param name variable's name
 * @return true if present
 */
bool Context::isContaining(std::string name)
{
    for(std::map<std::string, Number>::iterator iter = m_map->begin(); iter != m_map->end(); ++iter)
    {
        if (iter->first == name)
            return true;
    }
    return (hasNextLocalContext()) ? m_localContext->isContaining(name) : false;
}

/**
 * Return the youngest Number of a variable
 * @param name variable's name
 * @return the variable's value
 */
Number *Context::getNumber(std::string name)
{
    Number *n = NULL;
    if (hasNextLocalContext())
        n = m_localContext->getNumber(name);
    if (n != NULL)
        return n;

    for(std::map<std::string, Number>::iterator iter = m_map->begin(); iter != m_map->end(); ++iter)
    {
        if (iter->first == name)
            return &(iter->second);
    }
    return NULL;
}

/**
 * Modify the value of a variable in the youngest context
 * @param name variable's name
 * @param number variable's value
 * @return true on success
 */
bool Context::modify(std::string name, Number* number)
{
    if (hasNextLocalContext())
    {
        if (m_localContext->modify(name, number))
            return true;
    }

    for(std::map<std::string, Number>::iterator iter = m_map->begin(); iter != m_map->end(); ++iter)
    {
        if (iter->first == name)
        {
            ((Number)iter->second ).fromString(number->toString());
            return true;
        }
    }
    return false;
}

