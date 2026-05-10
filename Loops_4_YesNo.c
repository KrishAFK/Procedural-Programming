#include <stdio.h>
int main()
{
    int i=1;
    char res;
    do
    {
        printf("Enter your response (y/n): ");
        scanf("%c",&res);
        if (res=='y')
        {
            printf("Thank-you, continuing program...");
            i=1;
        }
        else if (res=='n')
        {
            printf("Ending program");
            i=0;
        }
        else
        {
            printf("Response not recognized, try again.");
        }
    }
    while (i==1);
}