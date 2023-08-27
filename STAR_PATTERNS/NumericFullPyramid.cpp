#include <iostream>
using namespace std;

int main()
{

    // taking input for rowCount
    int rowCount;
    cout << "Please enter rowCount : ";
    cin >> rowCount;

    // Full Pyramid with spaces
    for (int row = 0; row < rowCount; row++)
    {
        for (int star = 0; star < rowCount - row - 1; star++)
        {
            cout << " ";
        }
        int start = row + 1;
        for (int column = 0; column < row + 1; column++)
        {
            cout << start++;
        }
        start -= 2;
        for (; start > row; start--)
        {
            cout << start;
        }
        cout << endl;
    }
}

/*
Numeric Full Pyramid

    1
   232
  34543
 4567654
567898765

row : 4 (outer loop)

*/