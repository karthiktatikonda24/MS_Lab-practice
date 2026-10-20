// KS code for printing pattern of numbers
/* 1
   22
   333
   4444
   55555 */
#include<stdio.h>
int main(void)
{
  int h;
  printf("What is the height of pyramid: ");
   scanf("%d",&h);
   for(int i=1;i<=h;i++)
     {
       for(int j=1;j<=(i);j++)
         {
           printf("%d",i);
         }
       printf("\n");
     }
}