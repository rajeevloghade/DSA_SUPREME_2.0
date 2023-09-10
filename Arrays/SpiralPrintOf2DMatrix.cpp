#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> matrix)
{

    vector<int> spiralPrint;
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    int totalElements = rowSize * colSize;
    int count = 0;

    int startingRow = 0;
    int endingColumn = colSize - 1;
    int endingRow = rowSize - 1;
    int startingColumn = 0;

    while (count < totalElements)
    {

        // print starting row
        for (int index = startingColumn;
             index <= endingColumn && count < totalElements; index++)
        {
            spiralPrint.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending column
        for (int index = startingRow; index <= endingRow && count < totalElements;
             index++)
        {
            spiralPrint.push_back(matrix[index][endingColumn]);
            count++;
        }
        endingColumn--;

        // print ending row
        for (int index = endingColumn;
             index >= startingColumn && count < totalElements; index--)
        {
            spiralPrint.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow; index >= startingRow && count < totalElements;
             index--)
        {
            spiralPrint.push_back(matrix[index][startingColumn]);
            count++;
        }
        startingColumn++;
    }

    return spiralPrint;
}

void printVector(vector<int> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
}
int main()
{

    vector<vector<int>> vector = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Spiral Print of 2D Matrix : " << endl;
    printVector(spiralPrint(vector));
    return 0;
}

/**

Time Complexity :  O(rowSize*colSize)
Space Complexity : O(rowSize*colSize)

*/