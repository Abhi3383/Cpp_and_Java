#include <bits/stdc++.h>
using namespace std;

char getGrade1(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else
        return 'E';
}

char getGrade2(int marks)
{

    // assuming marks is between 0 to 100
    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
    }
}

int main()
{
    int marks;
	cout << "Enter the marks : ";
	cin >> marks;

	char finalGrade1 = getGrade1(marks);
	cout << "Grade is : "<<finalGrade1 << endl;

	char finalGrade2 = getGrade2(marks);
	cout << "Grade is : "<<finalGrade2 << endl;

    return 0;
}