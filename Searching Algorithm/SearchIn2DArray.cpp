#include <iostream>
#include <vector>
using namespace std;

bool searchIn2DArray(vector<vector<int>> matrix, int key)
{
    int row = matrix.size();
    int column = matrix[0].size();
    int totalElement = row * column;
    int start = 0;
    int end = totalElement - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // for rowIndex
        int rowIndex = mid / column;
        // for columnIndex
        int columnIndex = mid % column;
        // to get current number
        int currentNumber = matrix[rowIndex][columnIndex];

        if (currentNumber == key)
        {
            return true;
        }
        else if (currentNumber < key)
        {
            // if key is greater than key then check right side of array
            start = mid + 1;
        }
        else
        {
            // if key is less than key then check left side of array
            end = mid - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int key;
    cout << "Please enter you number to search : ";
    cin >> key;

    if (searchIn2DArray(matrix, key))
    {
        cout << "Key found";
    }
    else
    {
        cout << "Key NOT found";
    }
    return 0;
}

/**
Search in 2D Array by Binary Search

Time Complexity :  O(log m*n)
Space Complexity : O(1)

*/