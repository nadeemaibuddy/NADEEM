// Print the series: 3, 5, 6, 1, 9, 6, 8, 12.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter no.of elements or size of array");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid size");
        return 1;
    }
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        return 1;
    }
    printf("enter the series");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
}