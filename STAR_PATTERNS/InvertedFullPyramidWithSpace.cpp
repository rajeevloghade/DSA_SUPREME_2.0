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
Inverted Full Pyramid with spaces

 *   *   *   *   *
   *   *   *   *
     *   *   *
       *   *
         *
row : 4 (outer loop)

*/