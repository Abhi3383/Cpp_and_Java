#include <stdio.h>
struct Book
{
    int bookid;
    char title[20];
    float price;
};
void display(struct Book b)
{
    printf("\n%d %s %f ", b.bookid, b.title, b.price);
}
struct Book input()
{
    struct Book b;
    printf("Enter bookid, title and price of a book:");
    scanf("%d", &b.bookid);
    fflush(stdin);
    fgets(b.title, 20, stdin);
    scanf("f", &b.price);
    return b;
};
int main()
{
    struct Book b1 = {1, "CP", 340.0f};
    struct Book b2;
    display(b1);
    b2 = input();
    display(b2);
    printf("\n");
}