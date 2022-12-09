#include<stdio.h>
void binary(int a[20],int low,int high,int key);
void main()
{
	int i,n,key,a[20];
	clrscr();
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter your values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the Key Value:\n");
	scanf("%d",&key);
	binary(a,0,n-1,key);
	getch();
}
void binary(int a[20],int low,int high,int key)
{
	int mid,found;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			found=1;
			printf("The element is found in the index %d\n",mid);
			break;
		}
		else if(a[mid]<key)
		{
			low=mid+1;
		}
		else
			high=mid-1;
	}
	if(found==1)
		printf("the element is found\n");
}

