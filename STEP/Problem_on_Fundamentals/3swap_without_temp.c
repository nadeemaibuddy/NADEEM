// Swap two numbers without using a temporary variable.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    printf("before swap\n");
    printf("a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\n");
    printf("a=%d b=%d",a,b);
}