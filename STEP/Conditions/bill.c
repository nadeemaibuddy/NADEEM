//Calculate electricity bill or student grade using slabs/ranges.
#include<stdio.h>
int main()
{
    int units;
    printf("enter units\n");
    scanf("%d",&units);
    if(units<=100)
    {
        printf("%d",units*2);
    }
    else if(units<=200)
    {
        printf("%d",((100*2)+(units-100)*3));
    }
    else if(units<=300)
    {
        printf("%d",((100*2)+(100*3)+(units-200)*5));
    }
    else if(units>300)
    {
        printf("%d",((100*2)+(100*3)+(100*5)+(units-300)*7));
    }
}




//   if(units<=100)
//     {
//         printf("%d",units*2);
//     }
//     else if(units<=200)
//     {
//         printf("%d",((100*2)+((units-100)*3)));
//     }
//     else if(units<=300)
//     {
//         printf("%d",((100*2)+(units-200)*5)+((units-100-(units-200))*3));
//     }
//     else if(units>300)
//     {
//         printf("%d",((100*2)+((units-300)*7)+((units-200-(units-300))*5)+(units-100-(units-200-(units-300)))*3));
//     }