//Calculate simple interest from principal, rate, and time.

// P = Principal amount
// R = Annual rate of interest (%)
// T = Time in years
//simple interset=(p*t*r*)/100


#include<stdio.h>
int main()
{
    float p,r,t;
    scanf("%f %f %f",&p,&r,&t);
    float si=(p*t*r)/100;
    printf("%f",si);
    
}