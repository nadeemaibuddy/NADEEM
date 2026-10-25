// find even numbers which are common on both arrays.
// Array = 2, 3, 5, 1, 2, 6
// Array = 4, 2, 8, 6, 1, 9
#include<stdio.h>
int main()
{
    int arr1[]={2, 3, 5, 1, 2, 6};
    int arr2[]={4, 2, 8, 6, 1, 9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<n1;i++)
    {
        if(arr1[i]%2!=0)
        {
            continue;
        }
        int found=0;
        int printed=0;
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found=1;
                break;
            }
        }
        for(int k=0;k<i;k++)
        {
            if(arr1[k]==arr1[i])
            {
                printed=1;
                break;
            }
        }
        if(found && !printed)
        {
            printf("%d",arr1[i]);
        }
        
    }
}











// for(int i=0;i<(sizeof(arr1)/sizeof(arr1[0]));i++)
// {
//     if(arr1[i]%2==0)
//     {
//         for(int j=0;j<(sizeof(arr2)/sizeof(arr2[0]));j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 printf("%d",arr1[i]);
//             }
//         }
//     }
// }