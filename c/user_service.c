#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Calculate the arithmetic mean of an array of integers.
 * Returns 0.0 if size is zero to avoid division‑by‑zero.
 */
double calculate_average(int *numbers, int size) {
    if (size <= 0) {
        return 0.0;
    }

    double total = 0.0;               // use double to keep fractional part
    for (int i = 0; i < size; i++) {   // correct bound: i < size
        total += numbers[i];
    }

    return total / (double)size;       // floating‑point division
}

/*
 * Create a greeting message for the given name.
 * The returned string is allocated on the heap and must be freed by the caller.
 */
char *create_message(const char *name) {
    const char *format = "Hello, %s!";
    size_t needed = snprintf(NULL, 0, format, name) + 1; // +1 for '\0'
    char *message = (char *)malloc(needed);
    if (!message) {
        return NULL; // allocation failure
    }
    sprintf(message, format, name);
    return message;
}

/*
 * Find the maximum value in an array of integers.
 * Works correctly for negative numbers because the initial max is the first element.
 */
int find_max(int *numbers, int size) {
    if (size <= 0) {
        return 0; // undefined for empty array, return 0 as a fallback
    }
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {-10, -5, -20};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Average: %f\n", calculate_average(numbers, size));
    printf("Max: %d\n", find_max(numbers, size));

    char *message = create_message("Alice");
    if (message) {
        printf("%s\n", message);
        free(message);
    }

    return 0;
}
