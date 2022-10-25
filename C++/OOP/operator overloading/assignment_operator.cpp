/*
 -> Instead of using new and delete of C++  we are using malloc and free of C.
    myString s2=s1; //deep copy with copy constructor and shallow copy with withou it.
    mtString s4;
             s4=s1; //shallow copy with or without copy construtor to avoid this problem
                      we do assignment operator overloading
 -> theres no need to free copy constructor , copy constructor is called when object is being
    created and at that time it is not pointing to anything
    myString s2=s1;
    but while doing assignment it is possible that it may have been to something before
    s4=s1;
    s3=s1;
    As we can see that s1 was previuosly pointing to s3 before and now it is pointing to s4
    So we now have to free s1 which was previously pointing to s3 and then point or assign to s4
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
        a = (char *)malloc(size + 1);
        strcpy(a, str);
    }

    myString(const myString &s)
    {
        cout << "Copy constructor called" << endl;
        size = strlen(s.a);
        a = (char *)malloc(size + 1);
        strcpy(a, s.a);
    }

    myString operator=(const myString &s)
    {
        cout << "Assignment Operator called" << endl;
        if (a == s.a)
        {
            // since a is implcitly we cannot call it with its object
            // but it does go somewhere and the where it goes is *this
            // which is pointing to our object
            return *this;
        }
        free(a); // To free existing location
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
    myString s1("Prateek"); // s1.myString(parameter)
    myString s2 = s1;       // deep copy
                            // s2.myString(mystring &s1)
    s1.change("Jain");
    s1.display();
    s2.display();

    myString s3;
    s3 = s1; // it will do shallow copy,
             // we created assignment operator to avoid shallow copy
             // s3.operator=(s1)
    s3.display();
    s1.change("monk");
    s1.display();
    s3.display();

    myString s4("mySirG");
    s3 = s1;
    s4 = s1;
    s4.display();

    s1 = s1;
    s1.display();
    return 0;
}