#include <stdio.h>

int main() 
{
    int num, i;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &num);
    for (i=0;i<5;i++)
    {
        sum=sum+(num%10);
        num=(num/10);
    }
    printf("The sum is %d",sum);
}