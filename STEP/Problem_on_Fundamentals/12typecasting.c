// Demonstrate integer division versus floating-point division.
#include<stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d %f ",&a,&b);
    c=a;
    printf("%f %d",c,(int)b);
}