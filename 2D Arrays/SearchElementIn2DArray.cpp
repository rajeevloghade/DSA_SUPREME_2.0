#include <iostream>
#include <vector>
using namespace std;

bool searchIn2DArray(int array[][3], int rowSize, int colSize, int key)
{

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            if (array[row][col] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int key;
    cout << "Please enter key: ";
    cin >> key;

    if (searchIn2DArray(array, 3, 3, key))
    {
        cout << key << " is present in 2D Array";
    }
    else
    {
        cout << key << " is NOT present in 2D Array";
    }

    return 0;
}