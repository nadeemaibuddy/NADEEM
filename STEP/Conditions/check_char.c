//Check whether a character is vowel, consonant, digit, or special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a char:\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is a vowel",ch);
    }
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("%c is a consonant",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
}
