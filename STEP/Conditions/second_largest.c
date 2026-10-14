// Check positive, negative, or zero
#include<stdio.h>
int main()
{
    int a,b,c,larg;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("no second largest number");
    }
    else{
        if(a>=b && a>=c)
        {
            larg=a;
        }
        else if(b>=a && b>=c)
        {
            larg=b;
        }
        else if(c>=a && c>=b)
        {
            larg=c;
        }
    if(larg==a)
    {
        if(b>=c  && b!=a)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }
    else if(larg==b)
    {
        if(a>=c && a!=b)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else if(larg==c)
    {
        if(a>=b  && a!=c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",b);
        }
    }
}
}




// int a,b,c;
//     printf("enter three numbers\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a==b && b==c)
//     {
//         printf("all are equal");
//     }
//     else if(a!=b && b!=c && a!=c){
//     if(a>=b && b>=c)
//     {
//         printf("%d is the second largest number",b);
//     }
//     else if(c>=b && b>=a)
//     {
//         printf("%d is the second largest number",b);
//     }
//     else if(c>=a && a>=b)
//     {
//         printf("%d is the second largest number",a);
//     }
//     else if(b>=a && a>=c)
//     {
//         printf("%d is the second largest number",a);
//     }
//     else if(a>=c && c>=b)
//     {
//         printf("%d is the second largest number",c);
//     }
//     else if(b>=c && c>=a)
//     {
//         printf("%d is the second largest number",c);
//     }
//     }
//     else{
//         if(a==b && a>c)
//         {
//             printf("%d is the second largest number",c);
//         }
//         else if(a==c && a>b)
//         {
//             printf("%d is the second largest number",b);
//         }
//         else if(b==c && b>a)
//         {
//             printf("%d is the second largest number",a);
//         }
//         else if(a==b && a<c)
//         {
//             printf("%d is the second largest number",a);
//         }
//         else if(a==c && a<b)
//         {
//             printf("%d is the second largest number",a);
//         }
//         else if(b==c && b<a)
//         {
//             printf("%d is the second largest number",b);
//         }
//     }