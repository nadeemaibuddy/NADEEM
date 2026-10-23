// Sort an array using bubble sort.
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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    }


    
    
}
