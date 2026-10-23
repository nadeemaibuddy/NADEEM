//Count the frequency of each character in a string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char s[100]="";
   printf("enter string");
   if(fgets(s,sizeof s,stdin)==NULL)
   {
    return 1;
   }
   s[strcspn(s,"\n")]='\0';
   int freq[256]={0};
   for(int i=0;s[i]!='\0';i++)
   {
    freq[s[i]]++;
    printf("%d\n",freq[s[i]]);
   }
   for(int i=0;s[i]!='\0';i++)
   {
    if(freq[s[i]]!=0)
    printf("%c is repeated %d\n",s[i] ,freq[s[i]]);
    freq[s[i]]=0;
   }
}

