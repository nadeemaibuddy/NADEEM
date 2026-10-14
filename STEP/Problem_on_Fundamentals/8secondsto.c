// Convert seconds into hours, minutes, and seconds


#include<stdio.h>
int main()
{
    long int s;
    int h,m;
    scanf("%ld",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("hours=%d \n min=%d \n seconds=%ld",h,m,s);
}