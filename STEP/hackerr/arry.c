#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    if(n<=0)
    {
        return 1;
    }
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}