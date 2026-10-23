//Find maximum and minimum element.
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
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d\n",min);
    }
    
}
