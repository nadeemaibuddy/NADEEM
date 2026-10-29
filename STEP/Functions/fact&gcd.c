//Write functions for factorial and GCD.
#include<stdio.h>
int fact(int n)
{
   int i=1,result=1;
   while(i<=n)
   {
      result*=i;
      i++;
   }
   return result;
}
int gcd(int a,int b)    //\(O(log(min(a,b))))
{
   while(b!=0)
   {
      int temp=b;
      b=a%b;
      a=temp;
   }
   return a;
}
int main()
{
   int n;
   printf("enter a number\n");
   scanf("%d",&n);
   printf("fact of %d is:%d\n",n,fact(n));
   int x,y;
   printf("enter first number\n");
   scanf("%d",&x);
   printf("enter second number\n");
   scanf("%d",&y);
   printf("%d",gcd(x,y));

}


#include<stdio.h>
// int gcd(int a,int b)
// {
//     while(b!=0)
//     {
//         int temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }
// int lcm(int a,int b)
// {
//     int l=(a/gcd(a,b))*b;
//     return l;
// }


// int main()
// {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int r=lcm(x,y);
//     printf("%d",r);
// }