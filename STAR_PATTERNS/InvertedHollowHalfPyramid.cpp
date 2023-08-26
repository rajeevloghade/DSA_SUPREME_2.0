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
        for (int column = 0; column < rowCount - row; column++)
        {
            if (column == 0 || column == rowCount - row - 1 || row == 0)
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
Inverted Hollow Half Pyramid

* * * * *
*     *
*   *
* *
*

row : 5 (outer loop)
column : rowCount - row (inner loop) -> print ('*')
*/