/*
int strlen(char *);
char* strupr(char *);
char* strlwr(char *);
char* strrev(char *);
char* strcpy(char *, char *);
char* strcat(char *,char *);
int strcmp(char *,char *)
*/
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[20];

    cout << "Enter your name : ";
    // 1. fgets()
    fgets(str, 20, stdin);
    // 2. strlen()
    cout << strlen(str) << endl;
    // 3. strupr()
    strupr(str);
    cout << "hello"
         << " " << str;
    cout << endl;
    // 4. strlwr()
    strlwr(str);
    cout << "hello"
         << " " << str;
    // 5. strrev()
    cout << strrev(str);
    // 6, strcpy()
    cout << strcpy(str, " gupta");
    cout << endl;

    char str1[20] = "Gupta";

    // 7.strcat()
    cout << strcat(str, str1) << endl;
    // 8. strcmp()
    cout << strcmp(str, str1);
    return 0;
}