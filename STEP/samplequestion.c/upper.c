// Write a C program that checks if the following character is lowercase 'w' or 'y', then converts it to uppercase and works as instead of “YES & NO”.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter character\n");
    scanf("%c",&ch);
    if(ch=='w' || ch== 'y')
    {
        printf("%c",toupper(ch));
        // printf("%c",ch-32);
    }
    else{
        printf("invalid char");
    }
}