#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("E:/Ineuron/C++/OOP/File Handling/HelpingFile/pqr.txt", ios::app | ios::in | ios::out);
    if (!fout)
    {
        cout << "File not created or Not able to open the file" << endl;
    }
    else
    {
        cout << "Enter the data" << endl;
        while (fout)
        {
            getline(cin, line);
            if (line == "-1")
                break;
            fout << line;
            fout << " ";
        }
        cout << "File created successfully" << endl;
    }
    cout << endl;
    fout.close();

    ifstream fin;
    fin.open("E:/Ineuron/C++/OOP/File Handling/HelpingFile/pqr.txt");
    // Till when the file dosen't end it is true
    while (!fin.eof())
    {
        getline(fin, line);
        cout << line;
    }
    fin.close();
    return 0;
}