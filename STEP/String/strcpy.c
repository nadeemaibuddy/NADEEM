//Copy one string into another without strcpy().
#include<stdio.h>
int main()
{
    
    char s[100]={"nadeem uddin 1428 +-+"};
    // scanf("%s",s);
    int n=0;
    for(int i=0;s[i]!='\0';i++)
    {
        n++;
    }
    char s1[n+1]="";
    for(int i=0;s[i]!='\0';i++)
    {
       s1[i]=s[i];
    }
    printf("%s",s1);
    
}
