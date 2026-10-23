//Find the sum of digits and count digits.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    // int count=0,sum=0;
    // if(n==0)
    // {
    //     printf("sum =0 amd no.of digits = 1");
    // }
    // else{
    // while(n!=0)
    // {
    //     count++;
    //     sum+=n%10;
    //     n=n/10;
    // }
    // if(sum>0)
    // {
    // printf("sum =%d amd no.of digits are =%d",sum,count);
    // }   
    // else{
    //     printf("sum =%d amd no.of digits are =%d",-sum,count);
    // }
    // }

    
    int count=0,sum=0;
    if(n==0)
    {
        printf("sum =0 amd no.of digits = 1");
    }
    else{
    while(n!=0)
    {
        count++;
        sum+=abs(n%10);
        n=n/10;
    }
    printf("sum =%d amd no.of digits are =%d",sum,count);
    }
}

