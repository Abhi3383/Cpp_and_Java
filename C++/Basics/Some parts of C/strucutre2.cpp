#include <bits/stdc++.h>
using namespace std;

struct Book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    void displayBook()
    {
        cout << "\n"
             << bookid << " " << title << " " << price;
    }
    void inputBook()
    {
        cout << "\nEnter book id,title,price : ";
        cin >> bookid;
        if (bookid < 0)
        {
            bookid = -bookid;
        }
        cin.ignore();
        cin.getline(title, 20);
        cin >> price;
    }
};

int main()
{
    Book b1, b2, b3;
    b1.inputBook();
    b2.inputBook();
    b3.inputBook();
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout << endl;
    return 0;
}
