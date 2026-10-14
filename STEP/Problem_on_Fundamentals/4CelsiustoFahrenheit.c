// Convert Celsius to Fahrenheit and Fahrenheit to Celsius.


#include<stdio.h>
int main()
{
    float Celsius,Fahrenheit;

    // Celsius to Fahrenheit
    // scanf("%f",&Celsius);
    // Fahrenheit=Celsius *9.0/5.0+32;
    // printf("%f",Fahrenheit);
    
    // Fahrenheit to Celsius.
    scanf("%f",&Fahrenheit);
    Celsius=(Fahrenheit-32)*5.0/9.0;
    printf("%f",Celsius);

}