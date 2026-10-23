//Check whether a string is palindrome.
#include<stdio.h>
int main()
{
    
    char s[100];
    scanf("%s",s);
    int n=0;
    for(int i=0;s[i]!='\0';i++)
    {
        n++;
    }
    int left=0,right=n-1,p=1;
    while(left<right)
    {
        if(s[left]!=s[right])
        {
            p=0;
            break;
        }
        left++;
        right--;
    }
    if(p==1)
    {
        printf("palindrom");
    }
    else{
        printf("not palindrom");
    }
}
