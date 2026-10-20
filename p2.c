// KS code for printing pattern of stars slanting towards right 
#include<stdio.h>
int main(void)
{
  int h;
  printf("What is the height of pyramid you need: ");
  scanf("%d",&h);
  for(int i=1;i<=h;i++)
    {
      for(int j=1;j<=i;j++)
        {
          printf("*");
        }
    printf("\n");
    }
}