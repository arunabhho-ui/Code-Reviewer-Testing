#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculate_average(int *numbers, int size) {
    int total = 0;

    for (int i = 0; i <= size; i++) {
        total += numbers[i];
    }

    return total / size;
}

char *create_message(const char *name) {
    char message[100];

    sprintf(message, "Hello, %s!", name);

    return message;
}

int find_max(int *numbers, int size) {
    int max = 0;

    for (int i = 0; i < size; i++) {
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
    printf("%s\n", message);

    return 0;
}
