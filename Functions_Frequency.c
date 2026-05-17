#include <stdio.h>
#include <string.h>


//Returns the frequency of 'target' in the provided string.

int countCharOccurrence(const char *str, char target) {
    int count = 0;
    
    // Iterate through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char inputString[101]; // 100 chars + 1 for null terminator
    char targetChar;

    // 1. Get the string from the user
    printf("Enter a string (max 100 characters): ");
    fgets(inputString, sizeof(inputString), stdin);

    // 2. Get the character to search for
    printf("Enter the character to count: ");
    scanf(" %c", &targetChar); // Note the space before %c to skip any leftover newline

    // 3. Call the function
    int result = countCharOccurrence(inputString, targetChar);

    // 4. Display result
    printf("The character '%c' appears %d times in the string.\n", targetChar, result);

    return 0;
}