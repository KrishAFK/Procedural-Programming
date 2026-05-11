#include <stdio.h>

int main() {
    int width;
    printf("Input width of arrow: ");
    if (scanf("%d", &width) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    for (int i = 0; i < width; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf(" ");
        }
        printf("\\\n");
    }

    for (int i = width - 2; i >= 0; i--) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf(" ");
        }
        printf("/\n");
    }

    return 0;
}