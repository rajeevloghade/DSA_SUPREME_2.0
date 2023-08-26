#include <iostream>
using namespace std;

int main()
{

    // taking input for count
    int count;
    cout << "Please enter count : ";
    cin >> count;

    for (int row = 0; row < count; row++)
    {
        for (int column = 0; column < count - row; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Inverted Half Pyramid

* * * * *
* * * *
* * *
* *
*

row : 5 (outer loop)
column : count - row (inner loop) -> print ('*')
*/