#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL,*current,*newnode,*temp,*previous;
void main()
{
	int ch;
	do
	{
	printf("Enter Ypur choice:\n");
	printf("1.Create,2.Display,3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:create();
		break;
		case 2:display();
		break;
		case 3:exit;
		break;
	}
	}while(ch!=3);
}
void create()
{
	int ch;
	do
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter Your Data:\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL)
		{
		start=newnode;
		current=newnode;
		}
		else
		{
		current->next=newnode;
		current=newnode;
		}
		printf("Do you want to continue\n");
		scanf("%d",&ch);
	}while(ch!=0);
}
void display()
{
	if(start==NULL)
		printf("The list is empty\n");
	else
	{
		temp=start;
		printf("the elements are\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}

