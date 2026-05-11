#include <stdio.h>

int main() 
{
    double x;
    int N;
    double current_term = 1.0;
    double sum = 0.0;

    printf("Enter a value of x to evaluate exp(x): ");
    if (scanf("%lf", &x) != 1) return 1;

    printf("Enter number of terms of Maclaurins series: ");
    if (scanf("%d", &N) != 1) return 1;

    for (int i = 1; i <= N; i++) 
    {

        if (i > 1) 
        {
            current_term *= (x / (i - 1));
        }
        
        sum += current_term;

        if (i == 1) 
        {
            printf("With %d term exp(%.1f) series = %.0f\n", i, x, sum);
        } 
        else 
        {
            printf("With %d terms exp(%.1f) series = %.6f\n", i, x, sum);
        }
    }
}