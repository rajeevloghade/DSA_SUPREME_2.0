#include <iostream>
#include <vector>
using namespace std;

void printRowWiseSum(int array[][3], int rowSize, int columnSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        int sum = 0;
        for (int column = 0; column < columnSize; column++)
        {
            sum += array[row][column];
        }
        cout << sum << " ";
    }
}

void printcolumn(int array[][3], int rowSize, int columnSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        int sum = 0;
        for (int column = 0; column < columnSize; column++)
        {
            sum += array[column][row];
        }
        cout << sum << " ";
    }
}

int main()
{

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int rowSize = 3;
    int columnSize = 3;

    cout << "Row wise sum : ";
    printRowWiseSum(array, rowSize, columnSize);
    cout << endl;
    cout << "column wise sum : ";
    printcolumn(array, rowSize, columnSize);

    return 0;
}