#include "GlobalFunctions.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class GlobalFunctions
 * @brief Pool of all evaluated functions
 */

static GlobalFunctions *s_instanceGlobalFunctions = 0;

/**
 * Constructor
 */
GlobalFunctions::GlobalFunctions()
{
    m_listeFunctions = new std::map<std::string, Function>();
}

/**
 * Destructor
 */
GlobalFunctions::~GlobalFunctions()
{
    delete m_listeFunctions;
}

/**
 * Singleton
 */
GlobalFunctions* GlobalFunctions::getInstance()
{
    if (s_instanceGlobalFunctions == 0)
        s_instanceGlobalFunctions = new GlobalFunctions;
    return s_instanceGlobalFunctions;
}

/**
 * Test the presence of a function
 */
bool GlobalFunctions::isContaining(std::string name)
{
    for(std::map<std::string, Function>::iterator iter = m_listeFunctions->begin(); iter != m_listeFunctions->end(); ++iter)
    {
        if (iter->first == name)
            return true;
    }
    return false;
}

/**
 * Return an evaluated function
 */
Function *GlobalFunctions::getFuntion(std::string name)
{
    for(std::map<std::string, Function>::iterator iter = m_listeFunctions->begin(); iter != m_listeFunctions->end(); ++iter)
    {
        if (iter->first == name)
            return &(iter->second);
    }
    return NULL;
}

/**
 * Add a new function in the pool
 */
void GlobalFunctions::addFunction(std::string name, Function *funct)
{
    m_listeFunctions->insert(std::pair<std::string, Function>(name, *funct));
}


