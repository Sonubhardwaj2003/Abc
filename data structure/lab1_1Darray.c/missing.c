#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;
    int sum = 0, expected_sum, missing_number;

    // Input number of elements
    printf("Enter the number of elements (n-1): ");
    scanf("%d", &size);

    // Check for size validity
    if (size > MAX_SIZE) {
        printf("Size exceeds maximum allowed size of %d\n", MAX_SIZE);
        return 1;
    }

    // Input elements of the array
    printf("Enter the elements of the array (from 1 to %d):\n", size + 1);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the given array
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the expected sum of numbers from 1 to n
    expected_sum = (size + 1) * (size + 2) / 2;

    // Find the missing number
    missing_number = expected_sum - sum;

    // Output the missing number
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
