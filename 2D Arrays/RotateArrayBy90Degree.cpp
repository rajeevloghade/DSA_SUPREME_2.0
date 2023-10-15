#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print2DArray(vector<vector<int>> matrix)
{

    int rowSize = matrix.size();

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < matrix[row].size(); column++)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void rotateBy90Degree(vector<vector<int>> &matrix)
{

    int rowSize = matrix.size();

    // 1. transepose matrix
    for (int row = 0; row < rowSize; row++)
    {
        for (int column = row; column < matrix[row].size(); column++)
        {
            swap(matrix[row][column], matrix[column][row]); // swap (row-col) -> (col-row)
        }
    }

    // 2. reverse every row of matrix
    for (int row = 0; row < rowSize; row++)
    {
        reverse(matrix[row].begin(), matrix[row].end()); // reverse every row of matrix
    }
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    print2DArray(matrix);
    rotateBy90Degree(matrix);
    cout << "After rotation by 90 degree : " << endl;
    print2DArray(matrix);

    cout << "Time Complexity : O(n2)" << endl;
    cout << "Space Complexity : O(1)" << endl;

    return 0;
}