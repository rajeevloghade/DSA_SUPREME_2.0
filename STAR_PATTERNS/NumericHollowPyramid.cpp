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
        for (int space = 0; space < rowCount - row - 1; space++)
        {
            cout << " ";
        }
        int start = 1;
        for (int number = 0; number < 2 * row + 1; number++)
        {
            if (row == 0 || row == rowCount - 1)
            {
                if (number % 2 == 0)
                {
                    cout << start++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (number == 0)
                    cout << 1;
                else if (number == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

/*
Numeric Hollow Pyramid

    1
   1 2
  1   3
 1     4
1 2 3 4 5

row : 5 (outer loop)

*/