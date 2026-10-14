// Find the largest of three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("all numbers are equal");
    }
    else{
        if(a>=b && a>=c)
        {
            printf("%d is the largest nmber",a);
        }
        else if(b>=a && b>=c)
        {
            printf("%d is the largest nmber",b);
        }
        else if(c>=a && c>=b)
        {
            printf("%d is the largest nmber",c);
        }
    }
}