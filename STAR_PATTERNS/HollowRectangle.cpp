#include <iostream>
using namespace std;

int main()
{

    // taking input for rowCount and colCount
    int rowCount;
    cout << "Please enter rowCount : ";
    cin >> rowCount;
    int colCount;
    cout << "Please enter colCount : ";
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int start = 0; start < colCount; start++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int space = 0; space < colCount - 2; space++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Hollow Rectangle

* * * * *
*       *
* * * * *

row : 3 (outer loop)
column : 5 (inner loop)
*/