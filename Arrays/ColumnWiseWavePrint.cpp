#include <iostream>
#include <vector>
using namespace std;

void columnWiseWavePrint(vector<vector<int>> vector)
{

    int rowSize = vector.size();
    int colSize = vector[0].size() - 1;

    for (int col = 0; col < colSize; col++)
    {
        // check if col is even
        if ((col & 1) == 0)
        {
            for (int row = 0; row < rowSize; row++)
            {
                cout << vector[row][col] << " ";
            }
        }
        else
        {
            for (int row = rowSize - 1; row >= 0; row--)
            {
                cout << vector[row][col] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> vector = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Column wise Wave Print of 2D Matrix : ";
    columnWiseWavePrint(vector);
    return 0;
}

/**

Time Complexity :  O(rowSize*colSize)
Space Complexity : O(1)

*/