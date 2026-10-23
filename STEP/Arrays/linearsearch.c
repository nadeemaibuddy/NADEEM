//Search for an element using linear search.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("your no.of elements are invalid");
    }
    else{
    int arr[n],search,f=0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    printf("enter number to search\n");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(search==arr[i])
        {
            f++;
            break;
        }
    }
    if(f==1)
    {
        printf("found");
    }
    else{
        printf("not found");
    }
    }


    
    
}
