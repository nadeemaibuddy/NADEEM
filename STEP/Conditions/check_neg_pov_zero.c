// Check whether an integer is positive, negative, or zero.
#include<stdio.h>
int main()
{
   int n;
   printf("enter a number:\n");
   scanf("%d",&n);
   if(n==0)
   {
    printf("number is zero");
   }
   else if(n>0){
    printf("number is positive");
   }
   else{
    printf("number is negative");
   }
}