// Read two integers and print their sum, difference, product, quotient, and remainder.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);

    //integer division 7/3 = 2
    //float division  7/2 =3.5

    return 0;
}