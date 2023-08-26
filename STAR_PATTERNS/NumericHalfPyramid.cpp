#include <iostream>
using namespace std;

int main()
{

    // taking input for count
    int rowCount;
    cout << "Please enter rowCount : ";
    cin >> rowCount;

    for (int row = 0; row < rowCount; row++)
    {
        for (int column = 0; column < row + 1; column++)
        {
            cout << column + 1;
        }
        cout << endl;
    }
}

/*
Numeric Half Pyramid

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

row : 5 (outer loop)
column : row + 1 (inner loop) -> print (column + 1)
*/