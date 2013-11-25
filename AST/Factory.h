#ifndef FACTORY_H
#define FACTORY_H

#include <Add.h>
#include <Divide.h>
#include <Modulo.h>
#include <Substract.h>
#include <Time.h>
#include <Number.h>
#include <AND.h>
#include <OR.h>
#include <NOT.h>
#include <Boolean.h>
#include <LessThanOrEqual.h>
#include <Variable.h>
#include <Context.h>
#include <Function.h>
#include <IfThenElse.h>

class Factory
{
    public:
        static Operation *createAddOperation(std::string body);
        static Operation *createDivideOperation(std::string body);
        static Operation *createModuloOperation(std::string body);
        static Operation *createSubstractOperation(std::string body);
        static Operation *createTimeOperation(std::string body);
        static Number *createIntegerNumber(int val);
        static Number *createRealNumber(float val);
        static Number *createNumber(std::string val);
        static Context *createNewLocalContext();
        static BinaryBooleanCondition *createNewANDOperation(std::string body);
        static BinaryBooleanCondition *createNewOROperation(std::string body);
        static UnaryBooleanCondition *createNewNOTOperation(std::string body);
        static UnaryBooleanCondition *createNewBoolean(bool val);
        static BinaryNumberCondition *createNewLessThanOrEqual(std::string body);
        static Variable *createNewVariable(std::string body);
        static Function *createNewFunction(std::string body, std::string name);
        static Expression *createNewIf(std::string body);
};

#endif // FACTORY_H
