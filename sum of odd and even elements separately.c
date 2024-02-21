#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int sum_even = 0, sum_odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of odd and even elements separately
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", sum_even);
    printf("Sum of odd elements: %d\n", sum_odd);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
