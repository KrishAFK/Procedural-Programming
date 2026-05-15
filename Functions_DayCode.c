#include <stdio.h>
#include <string.h>


// Returns a numeric code for a day based on a 3-character string.
// Returns -1 if the input is not a recognized day.
 
int getDayCode(const char *day) {
    if (strcmp(day, "Sun") == 0) return 0;
    if (strcmp(day, "Mon") == 0) return 1;
    if (strcmp(day, "Tue") == 0) return 2;
    if (strcmp(day, "Wed") == 0) return 3;
    if (strcmp(day, "Thu") == 0) return 4;
    if (strcmp(day, "Fri") == 0) return 5;
    if (strcmp(day, "Sat") == 0) return 6;
    
    return -1; // Invalid input
}

int main() {
    char userInput[4]; 
    printf("Enter a 3-letter day (e.g., Wed): ");
    // %3s limits the input to 3 characters to prevent buffer overflow
    scanf("%3s", userInput);

    int code = getDayCode(userInput);

    if (code != -1) {
        printf("The code for %s is: %d\n", userInput, code);
    } else {
        printf("Invalid day string.\n");
    }

    return 0;
}