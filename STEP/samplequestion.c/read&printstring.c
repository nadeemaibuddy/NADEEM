// 4. Write a C program to take string input and print all characters.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    // char s[100];
    // printf("enter string\n");
    // // scanf("%99s",s);
    // fgets(s,99,stdin);
    // printf("%s",s);



    int n;
    printf("enter the size of string\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid size");
        return 1;
    }
    char *s=malloc((n+1)*sizeof(char));
    if(s==NULL)
    {
        printf("memory not allocated");
        return 1;
    }
    int ch;
    while((ch=getchar())!='\n' && ch !=EOF);
    printf("enter string\n");
    // for(int i=0;i<n;i++)
    // {
    //     scanf(" %c",&s[i]);
    // }
    fgets(s,n+1,stdin);
    printf("%s",s);
    free(s);
}