#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define Max 100
char stack[Max];
int top=-1;
void push(char item)
{
	if(top>=Max-1)
		printf("Stack Overfow\n");
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
		printf("Stack underflow invalid infix expression\n");
	}
	else
	{
		item=stack[top];
		top=top-1;
		return(item);
	}
}
int isoperator(char symbol)
{
	if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
		return 1;
	else
		return 0;
}
int precedence(char symbol)
{
	if(symbol=='^')
		return 3;
	else if(symbol=='*'||symbol=='/')
		return 2;
	else if(symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}
void infixtopostfix(char infixexp[],char postfixexp[])
{
	int i,j;
	char item,x;
	push('(');
	strcat(infixexp,")");
	i=0;
	j=0;
	item=infixexp[i];
	while(item!=0)
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isdigit(item)||isalpha(item))
		{
			postfixexp[j]=item;
			j++;
		}
		else if(isoperator(item)==1)
		{
			x=pop();
			while(isoperator(x)==1&&precedence(x)>=precedence(item))
			{
				postfixexp[j]=x;
				j++;
				x=pop();
			}
			push(x);
			push(item);
		}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				postfixexp[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{
			printf("Invalid expression\n");
		}
		i++;
		item=infixexp[i];
	}
	if(top>0)
		printf("Invalid Expression\n");
	postfixexp[j]=0;
}
void main()
{
	char infix[Max],postfix[Max];
	clrscr();
	printf("Enter Infix Expression\n");
	gets(infix);
	infixtopostfix(infix,postfix);
	printf("Postfix Expression\n");
	puts(postfix);
	getch();
}