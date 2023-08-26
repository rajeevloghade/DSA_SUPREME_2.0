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
    for (int space = 0; space < rowCount - row - 1; space++)
    {
      cout << " ";
    }
    for (int star = 0; star < row + 1; star++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  // Inverted Full Pyramid with spaces
  for (int row = 0; row < rowCount; row++)
  {
    for (int space = 0; space < row; space++)
    {
      cout << " ";
    }
    for (int star = 0; star < rowCount - row; star++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

/*
Solid Diamond
         *
       *   *
     *   *   *
   *   *   *   *
 *   *   *   *   *
 *   *   *   *   *
   *   *   *   *
     *   *   *
       *   *
         *
row : 4 (outer loop)

*/