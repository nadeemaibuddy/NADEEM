// Question 1 ans 24AD
// Question 2 ANS 889.20


// Question 3. Character handling
// Write a C program that reads one character.
// - If the character is lowercase 'a', 'e', 'i', 'o', or 'u', convert it to uppercase and print it.
// - If it is an uppercase vowel, print "Already uppercase".
// - Otherwise, print "Not a vowel"

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter the character\n");
//     scanf("%c",&ch);
//     if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
//     {
//         printf("Input: %c\nOutput: %c",ch,ch-32);
//     }
//     else if(ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
//     {
//         printf("Already upper");
//     }
//     else{
//         printf("Not a vowel");
//     }
// }


// Write a C program that accepts a string, including spaces, and prints each character on a separate line.
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *s=malloc(1024*sizeof(char));
//     if(s==NULL)
//     {
//         printf("memory allocation failed");
//         return 1;
//     }
//     printf("enter the string");
//     scanf("%[^\n]%*c",s);                   //forget syntax
//     s=realloc(s,strlen(s)*sizeof(char));
//     for(int i=0;s[i]!='\0';i++)
//     {
//         printf("%c\n",s[i]);                //forget \n
//     }
// }


// // Write a C program to print every number from 150 to 250, stating whether each number is prime or not.
// #include<stdio.h>
// int isprime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for(int i=2;i*i<=n;i++)      //forget =
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int start=150,end=250;
//     for(int i=start;i<end;i++)
//     {
//         int r=isprime(i);
//         if(r==1)
//         {
//             printf("%d ",i);
//         }
//     }
// }


// Write a C program that stores the following numbers in an array and prints the elements in reverse order.
// 12, 7, 4, 19, 6, 11, 3

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("enter no.of elements\n");
//     scanf("%d",&n);
//     if(n<=0)
//     {
//         printf("enter a valid size");
//         return 1;
//     }
//     int *arr=calloc(n,sizeof(int));
//     if(arr==NULL)
//     {
//         printf("memoery not allocated");
//         return 1;
//     }
//     printf("enter elements\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Actual array:\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\nreverse array:\n");
//     for(int i=n-1;i>=0;i--)
//     {
//         printf("%d ",arr[i]);
//     }
// }


// Common even elements in two arrays
// Given:

// #include<stdio.h>
// int main()
// {
//     int arr1[] = {4, 7, 2, 8, 2, 9, 10};
//     int arr2[] = {6, 2, 10, 5, 4, 12};
//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     for(int i=0;i<n1;i++)
//     {
//         if(arr1[i]%2!=0)
//         {
//             continue;
//         }
//         int found=0,printed=0;
//         for(int j=0;j<n2;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 found=1;
//                 break;
//             }
//         }
//         for(int k=0;k<i;k++)
//         {
//             if(arr1[k]==arr1[i])          //mistake
//             {
//                 printed=1;
//                 break;
//             }
//         }
//         if(found && !printed)
//         {
//             printf("%d",arr1[i]);
//         }
//     }
// }
    
// #include <stdio.h>

// int main(void)
// {
//     int arr[] = {12, 15, 20, 23, 28, 31};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 4 == 0)
//         {
//             printf("%d ", arr[i] / 2);
//         }
//     }

//     return 0;
// }
//6 10 14

// #include <stdio.h>

// int main(void)
// {
//     int arr[] = {2, 7, 4, 9, 6};
//     int total = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[j] > 5)
//             {
//                 total += i;
//             }
//         }
//     }

//     printf("Total = %d\n", total);

//     return 0;
// }
// //9



// int isPrime(int n)
// {                                    //and here it should check wither th number is less then 2,if true then return 1
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 1;    here it should return 0
//         }
//     }

//     return 0;          here it should return 1
// }

// int isPrime(int n)
// {
//     if(n<2)
//     {
//         return 0;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }

//     return 1;
// }