//Swap two numbers using pointers.
#include<stdio.h>
int main()
{
   int a=10,b=20;
   int *p,*q;
   p=&a;
   q=&b;
   int temp=*p;
   *p=*q;
   *q=temp;;
   printf("%d %d",a,b);
}
