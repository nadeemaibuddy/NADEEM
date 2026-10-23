//Reverse a number.
#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("cant reverse");
    }
    else if(n==0)
    {
        printf("%d",n);
    }
    else{
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
    }

}

