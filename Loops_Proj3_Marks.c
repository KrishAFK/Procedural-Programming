#include <stdio.h>

int main() 
{
    float score, total = 0;
    int count = 0;
    char choice;

    do 
    {
        while (1) {
            printf("Enter percentage score : ");
            scanf("%f", &score);

            if (score >= 0 && score <= 100) {
                break;
            } else {
                printf("Positive scores less than 100 only please!\n");
            }
        }

        total += score;
        count++;

        printf("Do you wish to enter another score (y/n) ? : ");
        scanf(" %c", &choice);

    } 
    
    while (choice == 'y' || choice == 'Y');

    if (count > 0) 
    {
        float average = total / count;
        printf("Average score is : %.0f\n", average);
    } 
    else 
    {
        printf("No scores were entered.\n");
    }

    return 0;
}