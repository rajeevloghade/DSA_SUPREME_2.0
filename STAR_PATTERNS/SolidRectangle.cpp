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
        for (int column = 0; column < count; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Solid Rectangle

* * * * *
* * * * *
* * * * *
* * * * *

row : 4 (outer loop)
column : 4 (inner loop) -> print ('*')
*/