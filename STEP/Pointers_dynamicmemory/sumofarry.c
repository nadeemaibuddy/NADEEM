//Find the sum of array elements using pointer arithmetic.
#include<stdio.h>
int main()
{
   int arr[]={10,20,30,40,50};
   int *p=arr;
   int sum=0;
   for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
   {
      sum+=*(p+i);
   }
   printf("%d",sum);
}
