#include <stdio.h>

// Define the structure Student
struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    // Declare variables
    struct Student student1, student2;
    float averageMarks;

    // Input data for the first student
    printf("Enter details of student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);

    // Input data for the second student
    printf("\nEnter details of student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);

    // Display information of both students
    printf("\nInformation of student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\nInformation of student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);

    // Calculate the average of total marks
    averageMarks = (student1.totalMarks + student2.totalMarks) / 2.0;

    printf("\nAverage total marks: %.2f\n", averageMarks);

    return 0;
}
