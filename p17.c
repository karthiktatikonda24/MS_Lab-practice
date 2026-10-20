#include <stdio.h>
int main(void)
{
    int a,b;
    int countofdiv=0;
    int countofnum=0;
    scanf("%d %d",&a,&b);
    printf("Numbers with exactly three divisors:\n");
    for(int i=a;i<=b;i++)
    {
        countofdiv=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                countofdiv++;
            }
        }
        if(countofdiv==3)
        {
            printf("%d\n",i);
            countofnum++;
        }
    }
    printf("Total numbers: %d",countofnum);
}