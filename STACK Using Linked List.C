#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *Next;
};
struct node *Top=NULL,*current,*newnode,*temp;
void push();
void pop();
void display();
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("ENter you choice\n1.Push,2.Pop,3.Display,4.Exit\n");
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
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter your data\n");
	scanf("%d",&newnode->data);
	newnode->Next=NULL;
	if(Top==NULL)
	{
		Top=newnode;
	}
	else
	{
		newnode->Next=Top;
		Top=newnode;
	}
}
void pop()
{
	if(Top==NULL)
		printf("Stack is empty\n");

	else
	{
		temp=Top;
		Top=Top->Next;
		free(temp);
	}
}
void display()
{
	if(Top==NULL)
		printf("The Stack is empty\n");
	else
	{
		temp=Top;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->Next;
		}
	}
}
