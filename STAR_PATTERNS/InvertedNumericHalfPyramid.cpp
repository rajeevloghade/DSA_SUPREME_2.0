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
            cout << column + 1;
        }
        cout << endl;
    }
}

/*
Inverted Numeric Half Pyramid

12345
1234
123
12
1

row : 4 (outer loop)
column : 4 (inner loop) -> print ('*')
*/