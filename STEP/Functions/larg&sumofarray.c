//Pass an array to a function and return its largest element or sum.
#include<stdio.h>
#include<stdlib.h>
int larg(int *arr,int n)
{
   int max=arr[0];
   for(int i=1;i<n;i++)
   {
      if(max<arr[i])
      {
         max=arr[i];
      }
   }
   return max;
}
int add(int *arr,int n)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum+=arr[i];
   }
   return sum;
}
int main()
{
   int n;
   printf("enter no.of elements\n");
   scanf("%d",&n);
   int *arr=malloc(n*sizeof(int));
   printf("enter array elements\n");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("largest element in array:%d\n",larg(arr,n));
   printf("sumvof array elements:%d\n",add(arr,n));


}







#include<stdio.h>
// int add(int *arr, int n)
// {
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }
// int max(int *arr,int n)
// {
//     int max=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=max(arr,n);
//     printf("%d",s);
// }