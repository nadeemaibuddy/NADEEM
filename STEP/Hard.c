// // Swap two numbers using pointers
// #include<stdio.h>
// int main()
// {
//     int a=10,b=20;
//     int *p=&a,*q=&b;
//     // int temp=*p;
//     // *p=*q;
//     // *q=temp;
//     *p=*p+*q;
//     *q=*p-*q;
//     *p=*p-*q;
//     printf("%d %d",a,b);
// }




// // Find the sum of digits until one digit remains
// #include<stdio.h>
// int main()
// {
//     int n=456,x=n;
//     int sum=0,l;
//     // if(n<0)
//     // {
//     //     pri
//     // }
//     while(x>9)
//    {                                   //chek this
//         sum=0;
//         while(x>0)
//         {
//         l=x%10;
//         sum+=l;
//         x=x/10;
//         }
//         x=sum;
//     }
//      printf("%d",x);
//   // printf("%d",sum);
// }




// // Print all factors of a number and count them
// #include<stdio.h>
// int main()
// {
//     int n=10;
//     int count=0;
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             printf("%d ",i);
//             count++;
//             if(i!=n/i)
//             {
//                 printf("%d ",n/i);
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
// }



// // Check whether a number is a perfect number
// #include<stdio.h>
// int main()
// {
//     int n=28,sum=0;
//     for(int i=1;i*i<n;i++)
//     {
//         if(n%i==0)
//         {
//             sum+=i;
//             if(i!=n/i && n/i!=n)
//             {
//                 sum+=n/i;
//             }
//         }
//     }
//     printf(" %d",sum);
//     if(sum==n)
//     {
//         printf("perfect");
//     }
//     else{
//         printf("not perfect");
//     }

// }



// // Remove duplicate characters from a string
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char s[]={"banana"};
//     if(sizeof(s)<=0)
//     {
//         printf("invalid size");
//         return 0;
//     }
//     char *r=malloc(sizeof(s)*sizeof(char));
//     if(r==NULL)
//     {
//         printf("memory allocation failed");
//         return 0;
//     }
//     int duplicate=0,j=0;
//     for(int i=0;s[i]!='\0';i++)
//     {
        
//         duplicate=0;                            //missed
//         for(int k=0;k<i;k++)
//         {
//             if(s[k]==s[i])
//             {
//                 duplicate=1;
//                 break;
//             }
//         }
//         if(!duplicate)
//         {
//             r[j++]=s[i];                           //use seperate index for result
//         }
//     }
//     r[j]='\0';                           //add null terminator
//     strcpy(s,r);
//     printf("%s",s);
//     free(r);
// }



// // Count words in a string
// #include<stdio.h>
// int main()
// {
//     char s[] ={"Hello\nWorld"};
//     int count=0;
//     // printf("%s",s);
//     if(sizeof(s)<=1)
//     {
//         printf("%d",0);
//         return 0;
//     }
//     for(int i=0;s[i]!='\0';i++)
//     {
//         if(s[i]!=' ')
//         {
//         for(int j=i;s[j]!='\0';j++)
//         {
//             if(s[j]==' '||s[j]=='\t' ||s[j]=='\n' ||s[j+1]=='\0')
//             {
//                 count++;
//                 i=j;
//                 break;
//             }
//         }
//     }
//     }
//     printf("%d",count);
// }



// // Check whether two strings are anagrams
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char s1[]={"evil"},s2[]={"vile"};
//     int n1=sizeof(s1),n2=sizeof(s2);
//     int freq[256]={0};
//     if(n1!=n2)
//     {
//         printf("not an anagram");
//         return 0;
//     }
//     for(int i=0;s1[i]!='\0';i++)
//     {
//         freq[(int)s1[i]]++;
//     }
//     for(int i=0;s2[i]!='\0';i++)
//     {
//         freq[(int)s2[i]]--;
//     }
//     for(int i=0;s1[i]!='\0';i++)
//     {
//         if(freq[(int)s1[i]]!=0)
//         {
//             printf("not an anagram");
//             return 0;
//         }
//     }
//     printf("anagram");

// }

// // Find the second-largest distinct element
// #include<stdio.h>
// int main()
// {
//     int arr[]=	{7,7,7,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0],min=arr[n-1];
//     for(int i=0;i<n;i++)
//     {
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
//         if(min>arr[i])
//         {
//             min=arr[i];
//         }
//     }
//     if(max!=min)
//     {
//     int secondmax=min;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=max)
//         {
//             if(secondmax<arr[i])
//             {
//                 secondmax=arr[i];
//             }
//         }
//     }
//     printf("%d",secondmax);
// }
// else{
//     printf("no second elements");
// }
// }


// // Find the missing number in an array containing numbers from 1 to \(n\)
// #include<stdio.h>
// int main()
// {

//     int arr[]=	{1, 3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;                 //see the swap logic
//             }
//         }
//     }
//     if(n>1)
//     {
//     for(int i=0;i<n-1;i++)
//     {
//         if(arr[i]+1!=arr[i+1])
//         {
//             printf("%d",arr[i]+1);
//         }
//     } 
//     }
//     else{
//         for(int i=0;i<n;i++)
//         {
//         if(arr[i]==1)
//         {
//             printf("%d",arr[i]+1);
//         }
//         else{
//             printf("%d",arr[i]-1);
//         }
//     }
//     }

// }




// // Move all zeros to the end of an array
// #include<stdio.h>
// int main()
// {

//     int arr[]={-1, 0, -2, 0, 3};
//     int n=sizeof(arr)/sizeof(arr[0]); 
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(j;j<n;j++)
//     {
//         arr[j]=0;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }