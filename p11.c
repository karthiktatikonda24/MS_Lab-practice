// KS code for printing pattern of alphabets
/*   a
     ab
     abc
     abcd
     abcde   */
#include<stdio.h>
int main(void)
{
 int h;
 char alph;
 printf("Enter the height of the pyramid: ");
 scanf("%d",&h);
 alph = 'a';
  for(int i=1;i<=h;i++)
   {
     for(int j=1;j<=i;j++)
       {
         printf("%c",alph);
         alph++;
       }
     alph = 'a';
     printf("\n");
   }
}