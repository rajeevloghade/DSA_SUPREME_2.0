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
        int star = 0;
        for (int column = 0; column < (2 * rowCount) - 1; column++)
        {
            if (column < rowCount - row - 1)
            {
                cout << "  ";
            }
            else if (star < 2 * row + 1)
            {
                if (star == 0 || star == 2 * row || row == rowCount - 1)
                    cout << "* ";
                else
                    cout << "  ";
                star++;
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
Hollow Full Pyramid

      *
    *   *
  *       *
* * * * * * *

row : 4 (outer loop)
column : (2 * rowCount) - 1 (inner loop)
*/