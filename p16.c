#include <stdio.h>
int main(void)
{
    int n;
    int d=0;
    int sumofeven=0;
    int sumofodd=0;
    int digitgreater5=0;
    int digitless5=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
        {
            sumofeven = sumofeven + d;
        }
       else
       {
        sumofodd = sumofodd + d;
       }
       if(d>5)
       {
        digitgreater5++;
       }
       else
       {
        digitless5++;
       }
      n=n/10;
    }
    printf("Sum of even digits: %d\n",sumofeven);
     printf("Sum of odd digits: %d\n",sumofodd);
      printf("Digits greater than 5: %d\n",digitgreater5);
       printf("Digits lesser than 5: %d\n",digitless5);
}