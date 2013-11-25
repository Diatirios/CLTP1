#include "GlobalContext.h"

/**
 * @author David Lecoconnier
 * @author Allan Mottier
 * @date 2013-11-24
 * @class GlobalContext
 * @brief Context which is always available. This context manages all locals contexts
 */

static GlobalContext *s_globalContextInstance = NULL;


/**
 * Constructor
 */
GlobalContext::~GlobalContext()
{
    //dtor
}

/**
 * Singleton
 */
GlobalContext *GlobalContext::getInstance()
{
    if (s_globalContextInstance == NULL)
        s_globalContextInstance = new GlobalContext;
    return s_globalContextInstance;
}


