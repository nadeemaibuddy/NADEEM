//Check whether a number is prime.
#include<stdio.h>
int main()
{
    int n,p=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n<2)
    {
        printf("not prime");
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
    if(p==2)
    {
        printf("prime");
    }
    else{
        printf("not prime");
    }
    }

}

