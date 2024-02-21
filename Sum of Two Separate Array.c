#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr1, *arr2, *sumArr;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the arrays
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    sumArr = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || sumArr == NULL) {
        printf("Memory allocation failed. Exiting...");
        return 1;
    }

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate the sum of corresponding elements of both arrays
    for (int i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    printf("Sum of corresponding elements of the arrays:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);
    free(sumArr);

    return 0;
}
