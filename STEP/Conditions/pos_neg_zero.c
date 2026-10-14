// Check positive, negative, or zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d is zero",n);
    }
    else if(n>0){
        printf("%d is positive",n);
    }
    else {
        printf("%d is negative",n);
    }
}
