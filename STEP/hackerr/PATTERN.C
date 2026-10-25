//  4 4 4 4 4 4 4  
//  4 3 3 3 3 3 4   
//  4 3 2 2 2 3 4   
//  4 3 2 1 2 3 4   
//  4 3 2 2 2 3 4   
//  4 3 3 3 3 3 4   
//  4 4 4 4 4 4 4
#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else{
        return a;
    }
}

int main()
{
    int n=4;
    for(int i=0;i<n*2-1;i++)
    {
        for(int j=0;j<n*2-1;j++)
        {
            int left=j;
            int right=2*n-j-2;
            int top=i;
            int bottom=2*n-i-2;
            printf("%d",n-min(min(left,right),min(top,bottom)));

        }
        printf("\n");
    }
}