// KS code for printing pattern of alphabets
/*   abcde
     abcd
     abc
     ab
     a   */
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
     for(int j=1;j<=(h+1-i);j++)
       {
         printf("%c",alph);
         alph++;
       }
     alph = 'a';
     printf("\n");
   }
}