//Compare two strings without strcmp().
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("enter size of string\n");
    scanf("%d",&size);
    int ch;
    while(((ch=getchar())!='\n')&& ch!=EOF);
    if(size<=0)
    {
        return 1;
    }
    char *s=calloc((size+1),sizeof *s);
    if(s==NULL)
    {
        return 1;
    }
    fgets(s,size+1,stdin);
    printf("%s",s);


}

