#include <stdio.h>
int main()
{
    int num;
    printf("Enter times-table to generate :");
    scanf("%d",&num);
    int i;
    for (i=1;i<=12;i+=1)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
}
