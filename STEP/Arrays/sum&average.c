// Find the sum and average of array elements.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("you number of elements are in valid");
    }
    else{
        int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("sum= %d  average= %f",sum,sum/(float)n);
    }
}
