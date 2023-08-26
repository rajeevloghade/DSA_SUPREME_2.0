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
        int column;
        for (column = 0; column < row + 1; column++)
        {
            cout << column + 1;
        }
        column--;
        for (; column > 0; column--)
        {
            cout << column;
        }
        cout << endl;
    }
}

/*
Numeric Pellindrome Pyramid

1
121
12321
1234321

row : 4 (outer loop)
*/