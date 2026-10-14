//Check whether a year is leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter a number\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%100!=0 && year%4==0)
    {
        printf("%d is a  leap year",year);
    }
    else{
        printf("%d isnot a leap year",year);
    }
}
