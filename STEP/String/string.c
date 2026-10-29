#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[] = "banana";

    printf("%s\n", strchr(s, 'a'));
    printf("%s\n", strrchr(s, 'a'));



//   char ch;
//   scanf(" %c",&ch);               //add apace before %c so it skipa \n and take the character.
//   printf("%c\n",ch);

//   int n;
//   printf("enter string size\n");
//   scanf("%d",&n);
//   if(n<=1)
//   {
//       return 0;
//   }
//   char *s=calloc(n,sizeof(char));
//   if(s==NULL)
//   {
//       printf("memory not allocated");
//       return 0;
//   }
//   int ch;
//   while((ch=getchar())!='\n'  && ch !=EOF){}
//   if(fgets(s,n,stdin)==NULL)
//   {
//       return 0;
//   }
//   s[strcspn(s, "\n")] = '\0';
//   printf("%s",s);
//   free(s);    



  // char s[10];
  // if(fgets(s,10,stdin)==NULL)
  // {
  //     return 0;
  // }
  // s[strcspn(s,"\n")]='\0';
  // printf("%s",s);
}





// #include <stdio.h>

// int main() {
//     char s[100];
//     scanf("%[^\n]%*c", s);
//   	printf("Hello, World!\n%s",s);
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
//     char ch,s[100],sen[100];
//     scanf("%c",&ch);
//     scanf("%s",s);
//     scanf("\n");
//     scanf("%[^\n]%*c",sen);
//     printf("%c\n%s\n%s",ch,s,sen);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }









// Function	                Purpose	                               Behaviour
// strlen(s)	            Find length	                           Counts characters before '\0', excluding it.
// strcpy(dest, src)	    Copy string	                           Copies the source, including '\0'.
// strncpy(dest, src, n)	Copy with a limit	                   Copies at most n characters; may not add '\0'.
// strcat(dest, src)	    Append string	                       Adds the source at the end of the destination.
// strncat(dest, src, n)	Append with a limit	                   Appends at most n source characters and adds '\0'.
// strcmp(s1, s2)	        Compare strings	                       Returns zero if equal, negative or positive otherwise.
// strncmp(s1, s2, n)	    Compare a prefix	                   Compares at most n characters.
// strchr(s, ch)	        Find first character	               Returns a pointer to the first occurrence.
// strrchr(s, ch)	        Find last character	                   Returns a pointer to the last occurrence.
// strstr(s, sub)	        Find substring	                       Returns a pointer to the first occurrence of sub.
// strspn(s, accept)	    Count initial matching characters      Counts consecutive characters belonging to accept.
// strcspn(s, reject)	    Count initial nonmatching characters   Counts characters before the first character found in reject.
// strpbrk(s, accept)	    Find any matching character	           Returns a pointer to the first character matching any character in accept.
// strtok(s, delim)	        Split into tokens	                   Replaces delimiters with '\0' and returns tokens one by one.