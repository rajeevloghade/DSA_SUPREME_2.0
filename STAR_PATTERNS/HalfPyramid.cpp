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
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Half Pyramid

*
* *
* * *
* * * *
* * * * *

row : 5 (outer loop)
column : row+1 (inner loop) -> print('*')
*/