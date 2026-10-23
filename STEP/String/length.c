// Find string length without using strlen().
#include<stdio.h>
int main()
{
    int n=7;
    char s[n];
    scanf("%s",s);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
