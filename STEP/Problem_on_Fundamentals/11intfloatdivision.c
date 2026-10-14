// Demonstrate integer division versus floating-point division.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a/b;
    float d=(float)a/b;
    printf("int division=%d\nfloat division=%f",c,d);

}