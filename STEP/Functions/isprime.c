//Write isPrime(int n) and use it to print primes in a range.
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
   int n1,n2;
   printf("enter starting no :");
   scanf("%d",&n1);
   printf("enter ending no :");
   scanf("%d",&n2);
   for(int i=n1;i<=n2;i++)
   {
      int r=isprime(i);
      if(r==0)
      {
         continue;
      }
      else{
         printf("%d",i);
      }
   }
}











// #include<stdio.h>
// int isprime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int x;
//     scanf("%d",&x);
//     int p=isprime(x);
//     if(p==1)
//     {
//         printf("prime");
//     }
//     else{
//         printf("not prime");
//     }
// }