//Count vowels, consonants, digits, spaces, and special characters.
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
    int con=0,vow=0,dig=0,space=0,special=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
        {
            vow++;
        }
        else if((s[i] >='a' && s[i]<='z')||(s[i] >='A' && s[i]<='Z'))
        {
            con++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            dig++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        else{
            special++;
        }
    }
    printf("no.of vowels  =%d\nno.of  consonants =%d\nno.of  digits  =%d\nno.of  spaces =%d\nno.of  special characters =%d\n",vow,con,dig,space,special);
}
