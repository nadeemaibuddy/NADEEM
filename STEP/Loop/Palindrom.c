//Check whether a number is palindrome
#include<stdio.h>
int main()
{
    int n,rev=0,r;
    printf("enter a number:\n");
    scanf("%d",&n);
    int x=n;
    if(n<0)
    {
        printf("cant reverse");
    }
    else if(n==0)
    {
        printf("%d",n);
    }
    else{
    while(n>rev)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n==rev || n==rev/10)
    {
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }
    }

}

