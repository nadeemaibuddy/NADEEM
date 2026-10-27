// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<stdio.h>
// int main()
// {
//     int n=1;
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             printf("%d ",n);
//             n++;
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a[] = {2, 4, 2, 6, 8, 4};
//     int b[] = {4, 2, 4, 10, 6};

//     for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
//     {
//         if(a[i]%2!=0)
//         {
//             continue;
//         }
//         int found=0,printed=0;
//         for(int j=0;j<(sizeof(b)/sizeof(b[0]));j++)
//         {
//             if(a[i]==b[j])
//             {
//                 found=1;
//                 break;
//             }
//         }

//         for(int k=0;k<i;k++)
//         {
//             if(a[k]==a[i])
//             {
//                 printed=1;
//                 break;
//             }
//         }
//         if(printed==0 && found==1)
//         {
//             printf("%d",a[i]);
//         }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a[] = {12, 7, 12, 9, 5, 9};
//     int size=sizeof(a)/sizeof(a[0]);
//     int max=a[0],min=a[size-1];
//     for(int i=0;i<size;i++)
//     {
//         if(max<a[i])
//         {
//             max=a[i];
//         }
//         if(min>a[i])
//         {
//             min=a[i];
//         }
//     }
//     int secondmax=min;
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]!=max)
//         {
//             if(secondmax<a[i])
//             {
//                 secondmax=a[i];
//             }
//         }
//     }printf("%d",secondmax);
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *s=malloc(1024*sizeof(char));
//     int freq[256]={0};
//     if(s==NULL)
//     {
//         return 1;
//     }
//     scanf("%[^\n]%*c",s);
//     s=realloc(s,strlen(s)*sizeof(char));
//     for(int i=0;s[i]!='\0';i++)
//     {
//         freq[(int)s[i]]++;
//     }
//     for(int i=0;s[i]!='\0';i++)
//     {
//         if(freq[(int)s[i]]>0)
//         {
//             printf("%c :%d\n",s[i],freq[(int)s[i]]);
//             freq[(int)s[i]]=0;
//         }
//     }

// }








// // 1, 3, 6, 10, 15, 21, ...
// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     int n=6;
//     int tsum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum+=i;
//         printf("%d ",sum);
//         tsum+=sum;
//     }
//     printf("%d",tsum);
// }





// // Prime-number variation
// // Print all numbers between 100 and 200 that are prime and whose digits add up to an even number.
// // Use a separate function to check whether a number is prime.

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
//     int start=100,end=200;
//     for(int i=start;i<end;i++)
//     {
//         int r=isprime(i);
//         // if(r==1)
//         // {
//         //     printf("%d",i);
//         // }
//         int x=i,ld,sum=0;
//         while(x>0)
//         {
//             ld=x%10;
//             sum+=ld;
//             x=x/10;
//         }
//         if(sum%2==0 && r==1)
//         {
//             printf("%d ",i);
//         }
//     }
// }

// #include<stdio.h>
// int main()
// {
// int i, j, x = 0;

// for (i = 1; i <= 4; i++) {
//     for (j = 1; j <= i; j++) {
//         x += j;
//     }
//     printf("%d ", x);
// }
// }

// // x=0
// // i=1 j=1 x+=j, x=1
// // i=2 j=1 x+=j, x=2
// // i=2 j=2 x+=j, x=4
// // i=3 j=1 x+=j, x=5
// // i=3 j=2 x+=j, x=7
// // i=3 j=3 x+=j, x=10
// // i=4 j=1 x+=j, x=11
// // i=4 j=2 x+=j, x=13
// // i=4 j=3 x+=j, x=16
// // i=4 j=4 x+=j, x=20





// #include<stdio.h>
// int main()
// {

// int a[] = {10, 20, 30, 40};
// int *p = a;

// printf("%d ", *p);
// printf("%d ", *(p + 2));

// p++;
// printf("%d ", *p);
// printf("%d", *(a + 3));

// }

// // 10 30 20 40





