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
        for (int star = 0; star < rowCount - row; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < 2 * row + 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < rowCount - row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < rowCount; row++)
    {
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < 2 * rowCount - 2 * row - 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Flipped Solid Diamond

***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****

row : 4 (outer loop)

*/