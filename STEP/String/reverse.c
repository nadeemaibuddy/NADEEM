// Reverse a string without using strrev().
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
    int left=0,right=n-1;
    while(left<right)
    {
        int temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    printf("%s",s);
}
