#include <stdio.h>

// Define the structure Car
struct Car {
    int carID;
    char model[100];
    float rentalRatePerDay;
};

int main() {
    // Declare variables
    struct Car cars[3];
    int numDays;
    float totalRentalCost = 0.0;

    // Input details for three cars
    for (int i = 0; i < 3; i++) {
        printf("Enter details of car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per Day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
    }

    // Input number of days for rental
    printf("\nEnter the number of days for rental: ");
    scanf("%d", &numDays);

    // Calculate the total rental cost for the specified number of days
    for (int i = 0; i < 3; i++) {
        totalRentalCost += cars[i].rentalRatePerDay * numDays;
    }

    // Display the total rental cost
    printf("\nTotal Rental Cost for %d days: %.2f\n", numDays, totalRentalCost);

    return 0;
}
