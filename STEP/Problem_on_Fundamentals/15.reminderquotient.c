// Print the quotient and remainder of two integers.
#include<stdio.h>
int main()
{
    int dividend,divisor;
    printf("enter two numbers dividend and divisor");
    scanf("%d%d",&dividend,&divisor);
    printf("\nquotient=%d reminder=%d ",dividend/divisor,dividend%divisor);
}
