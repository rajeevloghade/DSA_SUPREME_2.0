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

//without using additional space
void transposeMatrix(int array[][3], int rowSize, int colSize)
{

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = row; column < rowSize; column++)
        {
            swap(array[row][column],array[column][row]);
        }
    }
    cout << "Transposed matrix : " << endl;
    print2DArray(array, rowSize, colSize);
}

int main()
{

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    transposeMatrix(array, 3, 3);

    return 0;
}