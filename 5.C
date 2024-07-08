#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[50][50],b[50][50],c[50][50];
	int m,n;
	clrscr();
	printf("Enter the Row Size");
	scanf("%d %d",&m,&n);
	printf("Enter The 1st Array Values: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The 2nd Array Values: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Array ELements are: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j]);
			printf("\n");
		}
		printf("  ");
	}
	getch();
}

