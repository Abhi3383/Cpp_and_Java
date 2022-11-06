#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Book
{
    int bookid;
    char title[20];
    float price;
};

struct Book inputBook();
void displayBook(struct Book);

int main()
{
    struct Book b1 = {1, "C", 425.0f};
    struct Book b2; // another way of initialising
    b2.bookid = 2;
    strcpy(b2.title, "C++"); // to put string in title
    b2.price = 324.0f;
    struct Book b3;
    b3 = inputBook();
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
    printf("\n");
    return 0;
}

struct Book inputBook()
{
    struct Book b;
    printf("\nEnter book id,title,price :");
    scanf("%d", &b.bookid);
    fflush(stdin);
    scanf("%s", &b.title);
    scanf("%f", &b.price);
    return b;
}

void displayBook(struct Book b)
{
    printf("\n%d %s %f", b.bookid, b.title, b.price);
}