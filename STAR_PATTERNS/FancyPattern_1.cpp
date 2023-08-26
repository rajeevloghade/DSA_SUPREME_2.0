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
            cout << row + 1;
            if (column < row)
                cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < rowCount; row++)
    {
        for (int column = 0; column < rowCount - row; column++)
        {
            cout << rowCount - row;
            if (column < rowCount - row - 1)
                cout << "*";
        }
        cout << endl;
    }
}

/*
Fancy Pattern 1

1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1

row : 4 (outer loop)
*/