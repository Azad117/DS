#include <stdio.h>
void rearrangePositiveNegativeElements(int arr[],int size)
{
  int i,temp,j;
  for(i=1;i<size;i++)
  {
      temp = arr[i];
      if(temp>0)
        continue;
        j = i-1;
        while(j>=0&& arr[j]>0)
        {
          arr[j+1] = arr[j];
          j--;
        }
        arr[j+1] = temp;
  }
}
int main()
{
  int numElements,i;
  int myArray[100];
  printf("Enter the Number of Elements:\n");
  scanf("%d",&numElements);
  printf("Enter the array Elements:\n");
  for(i=0;i<numElements;i++)
  {
    scanf("%d",&myArray[i]);
  }
  printf("Original Array is:\n");
  for(i=0;i<numElements;i++)
  {
      printf("%d",myArray[i]);
  }
  printf("\n");
  rearrangePositiveNegativeElements(myArray,numElements);
  printf("Rearranged array is \n");
  for(i=0;i<numElements;i++)
  {
      printf("%d",myArray[i]);
  }
printf("\n");
    return 0;
}
