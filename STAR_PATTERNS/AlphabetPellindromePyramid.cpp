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
        char column;
        for (column = 0; column < row + 1; column++)
        {
            char ch = column + 1 + 'A' - 1;
            cout << ch;
        }
        column--;
        for (; column > 0; column--)
        {
            char ch = column + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}

/*
Alphabet Pellindrome Pyramid

1
121
12321
1234321

row : 4 (outer loop)
*/