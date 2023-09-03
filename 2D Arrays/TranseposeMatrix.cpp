#include <iostream>
#include <vector>
using namespace std;

void print2DArray(int array[][3], int rowSize, int colSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < rowSize; column++)
        {
            cout << array[row][column] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int array[][3], int rowSize, int colSize)
{

    int transposeMatrix[3][3];

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < rowSize; column++)
        {
            transposeMatrix[row][column] = array[column][row];
        }
    }
    cout << "Transposed matrix : " << endl;
    print2DArray(transposeMatrix, rowSize, colSize);
}

int main()
{

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    transposeMatrix(array, 3, 3);

    return 0;
}