// Write a program to print 200 to 301, which is prime number or not.
#include<stdio.h>
int isprime(int n)
{
    int p=0;
    if(n<2)
    {
        return 0;
    }
    else{
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                p++;
                if(i!=n/i)
                {
                    p++;
                }
            }
        }
    }
    if(p==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int start,end;
    printf("enter starting of the range\n");
    scanf("%d",&start);
    printf("enter ending of the range\n");
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        int r=isprime(i);
        if(r==1)
        {
            printf("%d is prime\n",i);
        }
        else{
            printf("%d is not prime\n",i);
        }
    }
}