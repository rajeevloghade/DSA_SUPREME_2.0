#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void maxAndMinIn2DArray(int array[][3], int rowSize, int colSize)
{

    int min = INT_MAX;
    int max = INT_MIN;

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < rowSize; column++)
        {
            if (min > array[row][column])
                min = array[row][column];
            if (max < array[row][column])
                max = array[row][column];
        }
    }

    cout << "The minimum value in 2D array is :" << min << endl;
    cout << "The maximum value in 2D array is :" << max << endl;
}
int main()
{

    int array[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};

    maxAndMinIn2DArray(array, 3, 3);

    return 0;
}