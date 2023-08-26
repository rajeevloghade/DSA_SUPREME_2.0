#include <iostream>
using namespace std;

int main()
{

  // taking input for rowCount
  int rowCount;
  cout << "Please enter rowCount : ";
  cin >> rowCount;

  // Hollow Full Pyramid with spaces
  for (int row = 0; row < rowCount; row++)
  {
    for (int space = 0; space < rowCount - row - 1; space++)
    {
      cout << " ";
    }
    for (int star = 0; star < row + 1; star++)
    {
      if (star == 0 || star == row)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
  // Inverted Hollow Full Pyramid with spaces
  for (int row = 0; row < rowCount; row++)
  {
    for (int space = 0; space < row; space++)
    {
      cout << " ";
    }
    for (int star = 0; star < rowCount - row; star++)
    {
      if (star == 0 || star == rowCount - row - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
}

/*
Hollow Solid Diamond
         *
       *   *
     *       *
   *           *
 *               *
 *               *
   *           *
     *       *
       *   *
         *
row : 4 (outer loop)

*/