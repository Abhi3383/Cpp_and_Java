#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    // to open it in append mode
    fout.open("E:/Ineuron/C++/OOP/File Handling/HelpingFile/abc.txt", ios::app);
    if (!fout)
    {
        // if by mistake we may put the wrong location
        cout << "File not created or Not able to open the file" << endl;
    }
    else
    {
        // re-writing in existing file
        fout << "Welcome to ineuron" << endl;
        cout << "File created successfully" << endl;
    }
    fout.close();
    return 0;
}