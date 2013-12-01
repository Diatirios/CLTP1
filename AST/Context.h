#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include "Classes.h"
#include "Number.h"
#include <map>

class Context
{
    public:
        Context();
        ~Context();
        bool deleteLastLocalContext();
        void addNewLocalContest();
        void addNewVariableInLastContext(std::string name, Number* number);
        bool modify(std::string name, Number* number);
        bool isContaining(std::string name);
        Number *getNumber(std::string name);

    protected:
        bool hasNextLocalContext();
        Context *m_localContext;
        std::map<std::string, Number> *m_map;

    private:
};

#endif // CONTEXT_H
