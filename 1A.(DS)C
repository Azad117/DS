

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int* duplicates(int arr[],int n,int* result_size)
{
    int* ans = NULL;
    int i;
    for(i=0;i<n-1;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] == arr[i-1] && arr[i]!=arr[i+1])
        {
            (*result_size)++;
            ans = (int*)realloc(ans,(*result_size)* sizeof(int));
            ans[(*result_size)-1]=arr[i];
        }
    }
    if(*result_size){
        return ans;
    }
    else{
        free(ans);
        return NULL;
    }
}

int main()
{
    int num,i;
    int arr[10];
    printf("enter the number of ids:");
    scanf("%d",&num);
    printf("Enter the id's:");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    //int n = sizeof(arr) / sizeof(arr[0]);
    int result_size = 0;
    int* result = duplicates(arr, num, &result_size);

    if (result != NULL)
    {
        printf("Duplicate elements are: ");
        for (int i = 0; i<result_size; i++) 
        {
            printf("%d ", result[i]);
        }
        free(result);
    }
    else 
    {
        printf("-1");
    }

    return 0;
}
