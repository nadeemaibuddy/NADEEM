//Find the second-largest element.
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
    int max=arr[0],min=arr[0],secondmax;
    for(int i=1;i<n;i++)
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
    if(max!=min)
    {
    secondmax=min;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<max)
        {
            if(secondmax<arr[i])
            {
            secondmax=arr[i];
            }
        }
    }
    printf("%d\n",max);
    printf("%d\n",secondmax);
    }
    else{
        printf("no second largest element");
    }
    
}
}
