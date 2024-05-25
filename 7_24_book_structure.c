#include <stdio.h>
#include <stdlib.h>
struct Book {
    char author_name[100];
    char book_name[100];
};
void readBooks(struct Book *books, int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("Enter details for Book %d:\n", i+1);
        printf("Author Name: ");
        scanf(" %[^\n]", (books + i)->author_name);
        printf("Book Name: ");
        scanf(" %[^\n]", (books + i)->book_name);
    }
}
void displayBooks(struct Book *books, int n) {
	int i;
    printf("Books List:\n");
    for (i = 0; i < n; i++) {
        printf("Book %d:\n", i+1);
        printf("Author Name: %s\n", (books + i)->author_name);
        printf("Book Name: %s\n", (books + i)->book_name);
    }
}
int main() 
{
    int n;

    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
    readBooks(books, n);
    displayBooks(books, n);
    free(books);
    return 0;
}

