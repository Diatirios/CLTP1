#------------------------------------------------------------------------------#
# This makefile was generated by 'cbp2make' tool rev.147                       #
#------------------------------------------------------------------------------#


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = -Wall -fexceptions
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS = 

INC_RELEASE = $(INC)
CFLAGS_RELEASE = $(CFLAGS) -O2
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB)
LDFLAGS_RELEASE = $(LDFLAGS) -s
OBJDIR_RELEASE = 
DEP_RELEASE = 
OUT_RELEASE = AST


OBJ_RELEASE = $(OBJDIR_RELEASE)/main.o

all: exec

release:
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static AbstractNumber.cpp -o AbstractNumber.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Add.cpp -o Add.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static AND.cpp -o AND.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Argument.cpp -o Argument.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static BinaryBooleanCondition.cpp -o BinaryBooleanCondition.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static BinaryNumberCondition.cpp -o BinaryNumberCondition.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Boolean.cpp -o Boolean.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static BooleanCondition.cpp -o BooleanCondition.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Context.cpp -o Context.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Divide.cpp -o Divide.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Expression.cpp -o Expression.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Factory.cpp -o Factory.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Function.cpp -o Function.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static GlobalContext.cpp -o GlobalContext.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static GlobalFunctions.cpp -o GlobalFunctions.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static IfThenElse.cpp -o IfThenElse.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static LessThanOrEqual.cpp -o LessThanOrEqual.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static LocalContext.cpp -o LocalContext.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Modulo.cpp -o Modulo.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static NOT.cpp -o NOT.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Number.cpp -o Number.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Operation.cpp -o Operation.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static OR.cpp -o OR.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Substract.cpp -o Substract.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Time.cpp -o Time.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static UnaryBooleanCondition.cpp -o UnaryBooleanCondition.o
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c -static Variable.cpp -o Variable.o
	ar -rcs AST.a AbstractNumber.o Add.o AND.o Argument.o BinaryBooleanCondition.o BinaryNumberCondition.o Boolean.o BooleanCondition.o Context.o Divide.o Expression.o Factory.o Function.o GlobalContext.o GlobalFunctions.o IfThenElse.o LessThanOrEqual.o LocalContext.o Modulo.o NOT.o Number.o Operation.o OR.o Substract.o Time.o UnaryBooleanCondition.o Variable.o
	
exec:   release
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c main.cpp -o main.o
	$(CXX) -o AST main.o AST.a
	
clean: 
	rm AbstractNumber.o Add.o AND.o Argument.o BinaryBooleanCondition.o BinaryNumberCondition.o Boolean.o BooleanCondition.o Context.o Divide.o Expression.o Factory.o Function.o GlobalContext.o GlobalFunctions.o IfThenElse.o LessThanOrEqual.o LocalContext.o main.o Modulo.o NOT.o Number.o Operation.o OR.o Substract.o Time.o UnaryBooleanCondition.o Variable.o

.PHONY: clean

