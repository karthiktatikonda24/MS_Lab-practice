// KS code for printing pattern of stars
/*  *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *    */
#include<stdio.h>
int main(void)
{
 int h;
 printf("Enter the height of the pyramid: ");
 scanf("%d",&h);
 for(int i=1;i<=h;i++)
   {
     for(int j=1;j<=(h-i);j++)
       {
         printf(" ");
       }
     for(int k=1;k<=((2*i)-1);k++)
       {
         printf("*");
       }
   printf("\n");
   }
 for(int i=1;i<=(h-1);i++)
   {
     for(int j=1;j<=i;j++)
       {
         printf(" ");
       }
     for(int k=1;k<=(2*(h-i)-1);k++)
       {
         printf("*");
       }
   printf("\n");
   }
}