#include <iostream>
using namespace std;

int main()
{

    // taking input for rowCount
    int rowCount;
    cout << "Please enter rowCount : ";
    cin >> rowCount;

    for (int row = 0; row < rowCount; row++)
    {
        for (int column = 0; column < row + 1; column++)
        {
            if (column == 0 || column == row || row == rowCount - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

/*
Hollow Half Pyramid

*
* *
*   *
*     *
* * * * *

row : 5 (outer loop)
column : row+1 (inner loop)
*/