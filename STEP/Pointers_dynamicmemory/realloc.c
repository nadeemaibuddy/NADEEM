//Increase the dynamically allocated array size using realloc(), then free the memory.
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   printf("enter size of array\n");
   scanf("%d",&n);
   if(n<=0)
   {
    return 1;
   }
   else{
   int *arr=malloc(n*sizeof(int));
   if(arr==NULL)
   {
    free(arr);
    return 1;
   }
   printf("enter array elements\n");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int m;
   printf("enter new size\n");
   scanf("%d",&m);
   if(m<=0 || m==n)
   {
    free(arr);
    return 1;
   }
   int *temp=realloc(arr,m*sizeof(int));
   if(temp==NULL)
   {
    free(arr);
    return 1;
   }
   printf("enter new elements\n");
   for(int i=n;i<m;i++)
   {
    scanf("%d",&temp[i]);
   }
   for(int i=0;i<m;i++)
   {
    printf("%d",temp[i]);
   }
   free(temp);
   }
}
