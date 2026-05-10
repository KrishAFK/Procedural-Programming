#include <stdio.h>
int main()
{
    int num;
    int fac=1;
    printf("Which number do you wish to find the factorial of ? :");
    scanf("%d",&num);
    for (num;num>=1;num-=1)
    {
       fac=fac*num;
    }
    printf("%d",fac);
}
