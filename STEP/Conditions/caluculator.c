//Build a calculator using switch for +, -, *, /, and %.
#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("enter a choice\n+ for addition\n- for sub\n* for mul\n for div\nm for modulo");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+': printf("%d",a+b);
                  break;

        case '-':printf("%d",a-b);
                 break;

        case '*':printf("%d",a*b);
                break;

        case '/':
        if(b==0)
        {
         printf("cant divide by zero");
        }
        else{
            printf("%d",a/b);
        }

        case 'm':
        if(b==0)
        {
         printf("cant divide by zero");
         break;
        }
        else{
            printf("%d",a%b);
            break;
        }

        default:printf("enter valid choice");
                break;
    }

}
