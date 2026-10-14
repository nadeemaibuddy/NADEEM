//Check whether a number is Armstrong.
#include<stdio.h>
int power(int r,int n)
{
    int i=1,pow=1;
    while(i<=n)
    {
       pow*=r;
        i++;
    }
    return pow;
}
int main()
{
    int n,arm=0,r;
    printf("enter a number:\n");
    scanf("%d",&n);
    int x=n,count=0;
    if(n<0)
    {
        printf("not armstrong");
    }
    else if(n==0)
    {
        printf("%d is armstrong",n);
    }
    else{
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=x;
    while(n>0)
    {
        r=n%10;
        arm+=power(r,count);
        n=n/10;
    }
    if(arm==x)
    {
        printf("%d is armstrong",arm);
    }
    else{
        printf("not armstrong");
    }}

}

