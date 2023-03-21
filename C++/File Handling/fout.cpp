#include <iostream>
#include <fstream>
using namespace std;

/*
👉fstream -> ifstream -> read -> To use read we to create an object say fin
           -> ofstream -> write -> To use write we to create an object say fout

Had to tell fout in whixh file we have to read and write
so we call the open function using fout and write the full address of file

                    File Handling in C++

Member      |     Stands        |              Access
Constant    |       For         |
-------------------------------------------------------------------------------------------------------------------------------------------
in          |    input          |      File open for reading: the internal stream buffer supports input operations.
out         |    output         |      File open for writing: the internal stream buffer supports output operations.
binary      |    binary         |      Operations are performed in binary mode rather than text.
ate         |    at end         |      The output position starts at the end of the file.
app         |    append         |      All output operations happen at the end of the file, appending to its existing contents.
trunc       |    truncate       |      Any contents that existed in the file before it is open are discarded.


ios - moden in ios
       |-> read
       |-> write
       |-> read/write
       |-> delete
       |-> append
the way to access them is ios::app //for append
*/
int main()
{
    ofstream fout;
    // open named function will create the file if not created and will open it

    fout.open("E:/Ineuron/C++/OOP/File Handling/HelpingFile/abc.txt");
    if (!fout)
    {
        // if by mistake we may put the wrong location
        cout << "File not created or Not able to open the file" << endl;
    }
    else
    {
        // writing in file
        fout << "Hello, How are you ?" << endl;
        cout << "File created successfully" << endl;
    }
    fout.close();
    return 0;
}