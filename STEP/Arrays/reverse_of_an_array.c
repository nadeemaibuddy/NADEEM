#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // for(int i=0;i<n/2;i++)
    // {
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }

    int left=0,right=n-1;
    // while(left<right)
    // {
    //     int temp=arr[left];
    //     arr[left]=arr[right];
    //     arr[right]=temp;
    //     left++;
    //     right--;
    // }

    while(left<right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }


    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}