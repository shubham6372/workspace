#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int count = 0;

void addBook(struct book library[]) {
    printf("Enter book title: ");
    scanf("%s", library[count].title);
    printf("Enter book author: ");
    scanf("%s", library[count].author);
    printf("Enter number of pages: ");
    scanf("%d", &library[count].pages);
    printf("Enter book price: ");
    scanf("%f", &library[count].price);
    count++;
    printf("Book added successfully.\n");
}

void displayBooks(struct book library[]) {
    if (count == 0) {
        printf("No books available in the library.\n");
        return;
    }
    printf("List of books:\n");
    for (int i = 0; i < count; i++) {
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Pages: %d\n", library[i].pages);
        printf("Price: %.2f\n", library[i].price);
        printf("-------------------------\n");
    }
}

void searchBook(struct book library[]) {
    char title[50];
    printf("Enter book title to search: ");
    scanf("%s", title);
    for (int i = 0; i < count; i++) {
        if (strcmp(title, library[i].title) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Pages: %d\n", library[i].pages);
            printf("Price: %.2f\n", library[i].price);
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    struct book library[100];
    int choice;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add book\n");
        printf("2. Display books\n");
        printf("3. Search book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library);
                break;
            case 2:
                displayBooks(library);
                break;
            case 3:
                searchBook(library);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
