#include <stdio.h>
int main()
{
    int num;
    
    for (;;)
    {
        printf("Enter a number :");
        scanf("%d",&num);
        if (num==0) 
            break; 
        else
            printf("%d cubed is %d\n",num,(num*num*num));
    }
    printf("Loop terminated");
}