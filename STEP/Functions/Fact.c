//Factorial of a number.
//fact of 13 and more is more then the limit
#include<stdio.h>
int facto(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return n*facto(n-1);
    }
}
int main()
{
    int n, fact=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("can't finde the fact of given number");
    }
    else{
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    printf("fact of given number is %d\n",fact);   
    printf("%d",facto(n));
}
}

