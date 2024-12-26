#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int c = COLS; // Number of columns in the matrix

    // Accessing elements using c * row + column
    int row = 1;
    int column = 2;
    // The address at which element will be stored
    int index = c * row + column;
    cout << "Element at position (" << row << ", " << column << ") is: " << matrix[row][column] << std::endl;
    cout << "Element at index " << index << " is: " << matrix[index / c][index % c] << std::endl;
    return 0;
}
