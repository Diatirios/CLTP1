#define SIZE 50            /* Size of Stack */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "eval-upmc.h"
#include "../AST/Factory.h"
#include "Function.h"

char s[SIZE];
int top=-1;       /* Global declarations */

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void push(char elem)
{                       /* Function for PUSH operation */
    s[++top]=elem;
}

char pop()
{                      /* Function for POP operation */
    return(s[top--]);
}

int pr(char elem)
{                 /* Function for precedence */
    switch(elem)
    {
    case '#': return 0;
    case ')': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }

    return -1;
}

char* infixToPrefix(char* infx)
{
    char* prfx=(char*)malloc(2*strlen(infx)*sizeof(char));
    char ch,elem;
    int i=0,k=0;
    push('#');
    strrev(infx);
    while( (ch=infx[i++]) != '\0')
    {
        if( ch == ')') push(ch);
        else if(isalnum(ch)){
			do{
				prfx[k++]=ch;
			}while( (ch=infx[i++]) != '\0' && isalnum(ch));
		}
        else if( ch == '(')
		{
			while( s[top] != ')')
				prfx[k++]=pop();
			elem=pop(); /* Remove ) */
		}
		else
		{       /* Operator */
			while( pr(s[top]) >= pr(ch) )
				prfx[k++]=pop();
			push(ch);
		}
		prfx[k++]=' ';
    }
    while( s[top] != '#')     /* Pop from stack till empty */
        prfx[k++]=pop();
    prfx[k]='\0';          /* Make prfx as valid string */
    return strrev(prfx);
}

void functionRecognition(char* str)
{
    int isIfThenElse = 0;
    char* finArg = strchr(str, ')');
    char* arg = strchr(str, '(');
    int taille = arg-str;

    char* dest = calloc(taille + 1);
    strncat(dest, str, taille);
    dest[taille] = '\0';

    Function *f = Factory::createNewFunction(str, dest);
    free(dest);

    taille = finArg-arg;
    dest = calloc(taille + 1);
    strncat(dest, arg, taille);
    dest[taille] = '\0';

    std::list<std::string> *l = new std::list<std::string>();
    l->push_back(Factory::createNewVariable(dest));
    f->setArgsNames(l);

    f->setExpression(functionRecognitionRec(str, f));
}

Expression *functionRecognitionRec(char *str, Expression *parent)
{
    while (str[0] == ' ')// On retire les premiers blancs
        str++;

    token = strtok(str, " ");
    if (strcmp(token, "if") == 0)
    {
        token = strtok(NULL, " ");
        IfThenElse *ifExpr = (IfThenElse*)Factory::createNewIf("");

        str = strpbrk(str, "if");
        ifExpr->setBoolCondition(functionRecognitionRec(str, ifExpr));
        str = strpbrk(str, "then");
        ifExpr->setLeft(functionRecognitionRec(str, ifExpr));
        str = strpbrk(str, "else");
        ifExpr->setRight(functionRecognitionRec(str, ifExpr));

        return ifExpr;
    }
    else if (strcmp(token, "then") == 0)
        return NULL;
    else if (strcmp(token, "else") == 0)
        return NULL;
    else
    {
        // use arithmetic recognation to constrcut AST
    }
}

