#include <stdio.h>
#include <string.h>

// Define the structure Book
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    // Declare variables
    struct Book books[3];
    struct Book mostExpensive, lowestPriced;

    // Input details for three books
    for (int i = 0; i < 3; i++) {
        printf("Enter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Initialize mostExpensive and lowestPriced with the first book
    mostExpensive = books[0];
    lowestPriced = books[0];

    // Find the most expensive and lowest priced books
    for (int i = 1; i < 3; i++) {
        if (books[i].price > mostExpensive.price) {
            mostExpensive = books[i];
        }
        if (books[i].price < lowestPriced.price) {
            lowestPriced = books[i];
        }
    }

    // Display information of the most expensive and lowest priced books
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: %.2f\n", mostExpensive.price);

    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: %.2f\n", lowestPriced.price);

    return 0;
}
