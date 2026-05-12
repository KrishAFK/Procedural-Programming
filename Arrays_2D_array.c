#include <stdio.h>

int main() {
    // Declaration: 7 rows (days), 24 columns (hours)
    // Using float to allow for decimal precision in temperatures
    float temperature_readings[7][24];

    // Optional: Initialize the array with some sample data
    for (int day = 0; day < 7; day++) {
        for (int hour = 0; hour < 24; hour++) {
            // Simulating a temperature between 15.0 and 25.0 degrees
            temperature_readings[day][hour] = 15.0 + (day + hour) * 0.2;
        }
    }

    // Displaying a small portion of the data (Day 1)
    printf("Temperature readings for Day 1:\n");
    printf("Hour | Temp\n----------\n");
    for (int hour = 0; hour < 24; hour++) {
        printf("%02d:00| %.1f°C\n", hour, temperature_readings[0][hour]);
    }

    return 0;
}