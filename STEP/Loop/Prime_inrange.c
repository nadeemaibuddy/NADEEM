//Print all prime numbers in a given range.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d",&x);
    for(int n=0;n<=x;n++)
    {
    if(n<2)
    {
        printf("");
    }
    else{
        int p=0;
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
            printf("%d ",n);
        }
    }
}

}

