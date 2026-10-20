//ks code for palindrome
#include<stdio.h>
int main(void)
{
  int n,reversed=0,rem,q;
  printf("Enter the number: ");
  scanf("%d",&n);
  q=n;
  while(q!=0)
    {
      rem=q%10;
      reversed=reversed*10+rem;
      q=q/10;
    }
   if(reversed==n)
   {
     printf("It is a palindrome number");
   }
   else
   {
     printf("It is not a palindrome");
   }
}