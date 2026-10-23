//Dynamically allocate an integer array using malloc(), read values, then find maximum/sum.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   printf("enter size of array\n");
   scanf("%d",&n);
   if(n<=0)
   {
      printf("enter valid size");
      return 1;
   }
   else{
   int *arr=malloc(n*sizeof(int));
   if(arr==NULL)
   {
      return 1;
   }
   printf("enter elements of an array");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   int max=arr[0],sum=0;
   for(int i=0;i<n;i++)
   {
      if(max<arr[i])
      {
         max=arr[i];
      }
      sum+=arr[i];
   }
   printf("%d %d",max,sum);
   free(arr);
   }
}
