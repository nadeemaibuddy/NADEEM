// Read a character and print its next character

#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    printf("char after %c IS %c",ch,ch+1);

}