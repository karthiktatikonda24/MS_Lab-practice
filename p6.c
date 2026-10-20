// KS code for printing pattern of stars
/*   * 
    * * 
   * * * 
  * * * * 
 * * * * *   */
#include<stdio.h>
int main(void)
{
  int h;
  printf("What is the height of pyramid: ");
  scanf("%d",&h);
   for(int i=1;i<=h;i++)
     {
       for(int j=1;j<=(h-i);j++)
         {
           printf(" ");
         }
       for(int k=1;k<=i;k++)
         {
           printf("* ");
         }
      printf("\n");
     }
}