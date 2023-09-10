#include <iostream>
#include <vector>
using namespace std;

void rowumnWiseWavePrint(vector<vector<int>> vector)
{

    int rowSize = vector.size();
    int colSize = vector[0].size();

    for (int row = 0; row < rowSize; row++)
    {
        // check if row is even
        if ((row & 1) == 0)
        {
            for (int col = 0; col < colSize; col++)
            {
                cout << vector[row][col] << " ";
            }
        }
        else
        {
            for (int col = rowSize - 1; col >= 0; col--)
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

    cout << "Row wise Wave Print of 2D Matrix : " << endl;
    rowumnWiseWavePrint(vector);
    return 0;
}

/**

Time Complexity :  O(rowSize*rowSize)
Space Complexity : O(1)

*/