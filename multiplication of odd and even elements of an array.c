#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int oddProduct = 1, evenProduct = 1;

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
        if (arr[i] % 2 == 0) {
            evenProduct *= arr[i];
        } else {
            oddProduct *= arr[i];
        }
    }

    printf("Multiplication of odd elements: %d\n", oddProduct);
    printf("Multiplication of even elements: %d\n", evenProduct);

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
