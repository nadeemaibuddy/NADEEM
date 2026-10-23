//Check whether a number is Armstrong.
#include<stdio.h>
int gcd(int a,int b){
    // while(a>0 && b>0)
    // {
    //     if(a>b)
    //     {
    //         a=a%b;
    //     }
    //     else if(b>a){
    //         b=b%a;
    //     }
    // }return a+b;
    while(b!=0){
       int temp=a%b;
       a=b;
       b=temp;
    }
    return a;
}
int lcm(int a,int b){
    // return (a*b)/gcd(a,b);
    return (a/gcd(a,b))*b;
}
int main()
{
    int x,y;
    printf("enter two numbers:\n");
    scanf("%d %d",&x,&y);
    printf("%d",lcm(x,y));

    
}

