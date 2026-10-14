// Find the largest of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(a!=b)
    {
        if(a>b)
        {
            printf("%d is the largest number",a);
        }
        else{
            printf("%d is the largest number",b);
        }
    }
    else{
        printf("both are equal");
    }
}