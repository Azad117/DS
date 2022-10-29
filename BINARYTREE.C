#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left,*right;
};
struct tree *newnode,*temp,*root=NULL;
void create();
void inorder();
void insert();
void preorder();
void postorder();
int main()
{
    int ch;
    do
    {
        printf("enter choice 1.create,2.inorder,3.preorder,4.postorder,5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
            break;
            case 2:if(root==NULL)
                    printf("empty queue");
                    else
                        inorder(root);
            break;
            case 3:if(root==NULL)
                    printf("empty queue");
                    else
                        preorder(root);
            break;
            case 4:if(root==NULL)
                    printf("empty queue");
                    else
                        postorder(root);
            break;
            case 5:exit(1);
            break;
        }
    }while(ch!=5);
    return 0;
}
void create()
{
    newnode=(struct tree *)malloc(sizeof(struct tree));
    printf("emter data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
        root=newnode;
    else
    {
        insert(root,newnode);
    }
}
void insert(struct tree *root,struct tree *newnode)
{
    if(newnode->data<root->data)
    {
        if(root->left==NULL)
            root->left=newnode;
        else
            insert(root->left,newnode);
    }
    else if(newnode->data>root->data)
    {
        if(root->right==NULL)
            root->right=newnode;
        else
            insert(root->right,newnode);
    }
}
void inorder(struct tree *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}
void preorder(struct tree *temp)
{
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(struct tree *temp)
{
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);
    }
}