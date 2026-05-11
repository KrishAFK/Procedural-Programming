#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
    int period, amplitude;
    int i, spaces;
    double angle, value;

    printf("Enter period of sine wave (no. of lines vertically) : ");
    scanf("%d", &period);

    printf("Enter amplitude of sine wave (no. of chars horizontally) : ");
    scanf("%d", &amplitude);

    for (i = 0; i < period; i++) {
        /* Convert line number to angle (0 to 2π) */
        angle = (2.0 * M_PI * i) / period;

        /* Sine value ranges from -1 to +1 */
        value = sin(angle);

        /* Shift and scale to get horizontal position */
        spaces = (int)((value + 1) * amplitude / 2);

        /* Print spaces */
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        /* Print wave point */
        printf("*\n");
    }

    return 0;
}
