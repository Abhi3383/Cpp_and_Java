#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line; // to i/p string
    fout.open("E:/Ineuron/C++/OOP/File Handling/HelpingFile/pqr.txt", ios::app | ios::in | ios::out);
    //                                                                --------
    //                                                                  ^
    //                                                                  |
    //                                                              mode of operation
    if (!fout)
    {
        // if by mistake we may put the wrong location
        cout << "File not created or Not able to open the file" << endl;
    }
    else
    {
        while (fout)
        {
            // getline(_,_); used to take 2 parameters
            // 1) from where and how to input the file
            // 2) from where to store it
            getline(cin, line);
            if (line == "-1")
                break;
            fout << line;
        }
        cout << "File created successfully" << endl;
    }
    fout.close();
    return 0;
}