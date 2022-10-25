/*
 -> Instead of using new and delete of C++  we are using malloc and free of C.
*/

#include <bits/stdc++.h>
using namespace std;

class myString
{
    char *a;
    int size;

public:
    myString()
    {
        cout << "Default called" << endl;
        a = (char *)malloc(1); // assigning char using typecasting and allocating 1.
        size = 1;
    }
    myString(char *str) // char is pointing to the string
    {
        cout << "String Constructor called" << endl;
        size = strlen(str);
        a = (char *)malloc(size + 1); // we are allocating/creating size using malloc()
                                      // how much size we will be creating ? the length of the string +1
                                      // much of size we will be creating, + 1 bcz we have NULL value also
        strcpy(a, str);               // for deep copy we use strcpy
                                      // The function prototype of strcpy() is:
                                      // char* strcpy(char* destination, const char* source);
    }

    myString(const myString &s)
    {
        cout << "Copy constructor called" << endl;
        size = strlen(s.a);
        a = (char *)malloc(size + 1);
        strcpy(a, s.a);
    }

    void display()
    {
        cout << a << endl;
    }
    void change(char *str)
    {
        cout << "Change called" << endl;
        free(a);
        size = strlen(str);
        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }
};

int main()
{
    myString s1("Prateek");
    myString s2 = s1; // deep copy
    s1.change("Jain");
    s1.display();
    s2.display();
    // as o/p we will get Jain  Jain which will be bcz of shallow copy
    myString s3;
    s3 = s1; // shallow copy
    s3.display();
    s1.change("monk");
    s1.display();
    s3.display();
    return 0;
}