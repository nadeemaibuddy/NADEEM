//Reverse an array in place
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
    int left=0,right=n-1;
    while(left<right)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    }


    
    
}
