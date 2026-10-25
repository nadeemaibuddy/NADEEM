#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// a11472o5t6


int main() {

    char *s=malloc(1024*sizeof(char));
    char freq[58]={0};
    scanf("%[^\n]%*c", s);
    s=realloc(s,strlen(s)*sizeof(char));
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            freq[(int)s[i]]++;
        }
    }
    for(int i=48;i<58;i++)
    {
        printf("%d ",freq[i]);
    }
    return 0;
}
