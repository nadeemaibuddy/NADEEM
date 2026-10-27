#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char ch;
  scanf(" %c",&ch);               //add apace before %c so it skipa \n and take the character.
  printf("%c\n",ch);

  int n;
  printf("enter string size\n");
  scanf("%d",&n);
  if(n<=1)
  {
      return 0;
  }
  char *s=calloc(n,sizeof(char));
  if(s==NULL)
  {
      printf("memory not allocated");
      return 0;
  }
  int ch;
  while((ch=getchar())!='\n'  && ch !=EOF){}
  if(fgets(s,n,stdin)==NULL)
  {
      return 0;
  }
  s[strcspn(s, "\n")] = '\0';
  printf("%s",s);
  free(s);    



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
