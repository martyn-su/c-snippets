

#include <stdio.h>

struct bookInfo
{
    char title[40];
    char author[25];
    float price;
    int pages;
    int cont;
};
int main()
{
    int ctr;
    struct bookInfo books[3];     // Array of three structure variables. Get the information about each book from the user
    for (ctr = 0; ctr < 3; ctr++) // Think of books as an object, struct name as a class, struct elements as fields
    {
        printf("What is the name of the book #%d?\n", (ctr + 1));
        scanf(" %s", books[ctr].title);
        printf("Who is the author? ");
        scanf(" %s", books[ctr].author);
        printf("How much did the book cost? ");
        scanf(" $%f", &books[ctr].price);
        printf("How many pages in the book? ");
        scanf(" %d", &books[ctr].pages);
        printf("Take next details? ");
        scanf(" %d", &books[ctr].cont);
    }
    // Print a header line and then loop through and print the info
    printf("\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr + 1), books[ctr].title, books[ctr].author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr].pages, books[ctr].price);
        printf("\n\n");
    }
    return (0);
}