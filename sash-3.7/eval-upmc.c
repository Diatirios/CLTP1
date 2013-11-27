#define SIZE 50            /* Size of Stack */
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include "eval-upmc.h"
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


