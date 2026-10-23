//Fibonacci series up to n terms.
//0 1 1 2 3 5 8 13
#include<stdio.h>
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n,f=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
       printf("%d ",fib(i));
    }

}

// #include<stdio.h>
// int main()
// {
//     int n,sum=0,a=0,b=1;
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         if(i==0)
//         {
//             printf("%d ",i);
//         }
//         else if(i==1)
//         {
//             printf("%d ",i);
//         }
//         else{
//             sum=a+b;
//              printf("%d ",sum);
//              a=b;
//              b=sum;
             
//         }
//     }

// }