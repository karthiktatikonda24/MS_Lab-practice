// KS code for printing pattern of stars based on users input of height and width.
#include<stdio.h>
int main(void)
{
  int h,w;
  printf("What is the height of the pyramid you need: ");
  scanf("%d %d",&h,&w);
  for(int i=1;i<=h;i++)
    {
      for(int j=1;j<=w;j++)
        {
          printf("*");
        }
    printf("\n");
    }
}