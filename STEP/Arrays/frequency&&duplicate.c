// Sort an array using bubble sort.
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of elements of firts array:\n");
    scanf("%d",&n);
    printf("enter number of elements of second array:\n");
    scanf("%d",&m);
    if(n<=0 && m<=0)
    {
        printf("your no.of elements are invalid");
    }
    else{
    int arr1[n+m],arr2[m];
    printf("enter  elements of first array:\n");
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr1[i]);
    }
    printf("enter elements of second array:\n");
    for(int i=0;i<m;i++)
    {
        scanf(" %d",&arr2[i]);
    }
    for(int i=n,j=0;i<n+m;i++,j++)
    {
        arr1[i]=arr2[j];
    }
    int max=arr1[0];
    for(int i=0;i<n+m;i++)
    {
        if(max<arr1[i])
        {
            max=arr1[i];
        }
        printf("%d ",arr1[i]);
    }
    int freq[max+1]={};
    for(int i=0;i<n+m;i++)
    {
        if(arr1[i]>=0)
        {
            freq[arr1[i]]++;
        }
    }
    int count=0;
    for(int i=0;i<=max;i++)
    {
        if(freq[i]>1  && freq[i]!=0)
        {
            count++;
            freq[i]=0;
        }
    }
    // printf(" \n");
    // for(int i=0;i<=max;i++)
    // {
    //     printf("%d",freq[i]);
    // }
    printf("%d",count);
    }
}
