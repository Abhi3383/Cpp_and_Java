#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 2 numbers " << endl;
    cin >> a >> b;
    // say if programmer forgot writing
    //  if(b==0)
    // cout << "Invalid input" << endl;
    // else
    // then it will have abnormal termination
    // now we know that below line can generate porblem or
    // we may have a doubt that it will generate error
    try
    {
        if (b == 1)
            throw "Divide by zero Error";
        c = a / b;
    }
    catch (const char *msg) // since the message written in throw " " is string so we pass char * in catch to pass character as string
                            // we passed const along with char * msg because we cannot change message in throw, it is an immutable string
    {
        cout << msg << endl;
    }
    cout << "Result = " << c;
    return 0;
}