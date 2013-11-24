#ifndef GLOBALFUNCTIONS_H
#define GLOBALFUNCTIONS_H

#include <string>
#include <map>
#include <Function.h>

class GlobalFunctions
{
    public:
        static GlobalFunctions* getInstance();
        bool isContaining(std::string name);
        Function* getFuntion(std::string name);
        void addFunction(std::string name, Function *funct);

    protected:
    private:
        GlobalFunctions();
        virtual ~GlobalFunctions();
        std::map<std::string, Function> *m_listeFunctions;
};

#endif // GLOBALFUNCTIONS_H
