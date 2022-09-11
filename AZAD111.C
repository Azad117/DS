#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *previous,*next;
};
struct node *start=NULL,*newnode,*temp,*previous,*current;
void create();
void display();
void addbegin();
void addend();
void addlocation();
void deletebegin();
void deleteend();
void deletelocation();
void sort();
void findandreplace();
int count()
{
    int d=0;
    temp=start;
    do
    {
	temp=temp->next;
	d++;
    }while(temp->next!=NULL);
    return d;
}
void main()
{
    int ch;
    clrscr();
    do
    {
	printf("\nEnter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:create();
	    break;
	    case 2:display();
	    break;
	    case 3:addbegin();
	    break;
	    case 4:addend();
	    break;
	    case 5:addlocation();
	    break;
	    case 6:deletebegin();
	    break;
	    case 7:deleteend();
	    break;
	    case 8:deletelocation();
	    break;
	    case 9:sort();
	    break;
	    case 10:findandreplace();
	    break;
	    case 11:exit(1);
	    break;
	}
    }while(ch!=11);
    getch();
}
void create()
{
    int ch;
    do
    {
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter your Data\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->previous=NULL;
	if(start==NULL)
	{
	    start=newnode;
	    current=newnode;
	}
	else
	{
	      current->next=newnode;
	      newnode->previous=current;
	      current=newnode;
	}
	printf("If you want to continue Do not press 0(zero)\n");
	scanf("%d",&ch);
    }while(ch!=0);
}
void display()
{
    if(start==NULL)
	printf("\nThe List Is Empty");
    else
    {
	temp=start;
	while(temp!=NULL)
	{
	    printf("%d\t",temp->data);
	    temp=temp->next;
	}
    }
}
void addbegin()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter your Data\n");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
	start=newnode;
	current=newnode;
    }
    else
    {
	newnode->next=start;
	newnode->previous=NULL;
	start->previous=newnode;
	start=newnode;
    }
}
void addend()
{
     newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter your Data\n");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
	start=newnode;
	current=newnode;
    }
    else
    {
	current=start;
	while(current->next!=NULL)
	{
	    current=current->next;
	}
	current->next=newnode;
	newnode->previous=current;
	newnode->next=NULL;
	current=newnode;
    }
}
void addlocation()
{
    int loc,i;
    printf("Enter Location\n");
    scanf("%d",&loc);
    if(loc>count()+1||loc<0)
	printf("innsertin  not possible\n");
    else if(loc==1)
	addbegin();
    else if(loc>count())
	addend();
    else
    {
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter your Data\n");
	scanf("%d",&newnode->data);
	current=start;
	for(i=1;i<loc;i++)
	{
	    previous=current;
	    current=current->next;
	}
	previous->next=newnode;
	newnode->previous=previous;
	newnode->next=current;
	current->previous=newnode;
    }
}
void deletebegin()
{
    if(start==NULL)
	printf("\nThe List Is Empty\nDeletion not possible");
    else
    {
	temp=start;
	start=start->next;
	start->previous=NULL;
	free(temp);
    }

}
void deleteend()
{
    if(start==NULL)
	printf("\nThe list is empty\nDeletion not possible");
    else
    {
	temp=start;
	while(temp->next->next!=NULL)
	{
	    temp=temp->next;
	}
	current=temp->next;
	temp->next=NULL;
	free(current);
    }
}
void deletelocation()
{
    int loc,i;
    printf("Enter your Location\n");
    scanf("%d",&loc);
    if(loc>count()+1||loc<0)
	printf("\nThe List Empty\nDeletion not Possible");
    else if(loc==1)
	deletebegin();
    else if(loc>count())
	deleteend();
    else
    {
	current=start;
	for(i=1;i<loc;i++)
	{
	    previous=current;
	    current=current->next;
        }
        previous->next=current->next;
	current->previous=previous->next;
        free(current);
    }
}
void sort()
{
    int d;
    for(previous=start;previous!=NULL;previous=previous->next)
    {
        for(current=previous;current!=NULL;current=current->next)
        {
            if(previous->data>current->data)
            {
                d=previous->data;
                previous->data=current->data;
                current->data=d;
            }
        }
    }
display();
}
void findandreplace()
{
    int old,new;
    if(start==NULL)
        printf("The list is empty\n");
    else
    {
        printf("Enter old value to find\n");
        scanf("%d",&old);
        printf("Enter new value to replace\n");
        scanf("%d",&new);
        temp=start;
        while(temp->data!=old&&temp!=NULL)
        {
            temp=temp->next;
        }
        if(temp->data==old)
        {
            temp->data=new;
        }
        else
            printf("element no found\n");
    }
}