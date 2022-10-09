#include<stdio.h>
#define Max 5
int top=-1;
int Stack[Max];
void push();
void pop();
void display();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("ENter your choice\n1.Push,2.pop,3.display,4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(1);
			break;
		}
	}while(ch!=4);
	getch();
}
void push()
{
	int e;
	if(top>Max-1)
		printf("Push is not possible");
	else
	{
		printf("enter elements");
		scanf("%d",&e);
		top=top+1;
		Stack[top]=e;
	}
}
void pop()
{
	if(top<0)


		printf("Pop is not possible");
	else
	{
		printf("%d",Stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top<0)
		printf("Stack is empty");
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d\t",Stack[i]);
		}	
	}
}
