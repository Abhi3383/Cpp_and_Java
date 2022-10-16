#include <bits/stdc++.h>
using namespace std;

struct Book
{
    int bookid;
    char title[20];
    float price;
};

Book inputBook();
void displayBook(Book);

int main()
{
    Book b1 = {1, "C", 425.0f};
    Book b2; // another way of initialising
    b2.bookid = 2;
    strcpy(b2.title, "C++"); // to put string in title
    b2.price = 324.0f;
    Book b3;
    b3 = inputBook();
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
    cout << endl;
    return 0;
}

Book inputBook()
{
    Book b;
    cout << "\nEnter book id,title,price";
    cin >> b.bookid;
    cin.ignore();
    cin.getline(b.title, 20);
    cin >> b.price;
    return b;
}

void displayBook(Book b)
{
    cout << "\n"
         << b.bookid << " " << b.title << " " << b.price;
}