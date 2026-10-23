//Compare two strings without strcmp().
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("enter first string:");
    if(fgets(s1,sizeof s1,stdin)==NULL)
    {
        return 1;
    }

    printf("enter second string:");
    if(fgets(s2,sizeof s2,stdin)==NULL)
    {
        return 1;
    }
    
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';

    
    int p=1;
    int i=0;
    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            p=0;
            break;
        }
        i++;
    }
    if(p==1)
    {
        printf("same");
    }
    else{
        printf("not same");
    }
}

