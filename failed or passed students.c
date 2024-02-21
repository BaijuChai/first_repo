#include <stdio.h>
#include <stdlib.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 5
#define PASS_MARK 40

int main() {
    // Dynamically allocate memory for marks array
    int **marks = (int **)malloc(NUM_STUDENTS * sizeof(int *));
    if (marks == NULL) {
        printf("Memory allocation failed. Exiting...");
        return 1;
    }

    // Input marks for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        marks[i] = (int *)malloc(NUM_SUBJECTS * sizeof(int));
        if (marks[i] == NULL) {
            printf("Memory allocation failed. Exiting...");
            return 1;
        }

        printf("Enter marks for student %d (5 subjects):\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Check for pass/fail for each student
    printf("\nList of students who passed:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int passed = 1;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            if (marks[i][j] < PASS_MARK) {
                passed = 0;
                break;
            }
        }
        if (passed) {
            printf("Student %d\n", i + 1);
        }
    }

    printf("\nList of students who failed:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int failed = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            if (marks[i][j] < PASS_MARK) {
                failed = 1;
                break;
            }
        }
        if (failed) {
            printf("Student %d\n", i + 1);
        
