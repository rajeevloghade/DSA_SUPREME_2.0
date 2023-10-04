#include <iostream>
using namespace std;

int fastExponential(int numberOne, int numberTwo)
{

    int answer = 1;

    while (numberTwo > 0)
    {
        if (numberTwo & 1)
        {
            // ODD
            answer *= numberOne;
        }
        else
        {
            // EVEN
            numberOne = numberOne * numberOne;
        }
        numberTwo >>= 1; // numberOne/=2
    }
    return answer;
}

int slowExponential(int numberOne, int numberTwo)
{

    int answer = 1;

    for (int index = 0; index < numberTwo; index++)
    {
        answer *= numberOne;
    }
    return answer;
}
int main()
{

    int numberOne;
    cout << "Please enter your numberOne : ";
    cin >> numberOne;

    int numberTwo;
    cout << "Please enter your numberTwo : ";
    cin >> numberTwo;

    cout << "Slow Exponential of " << numberOne << " and " << numberTwo
         << " is : " << slowExponential(numberOne, numberTwo) << endl;

    cout << "Fast Exponential of " << numberOne << " and " << numberTwo
         << " is : " << fastExponential(numberOne, numberTwo) << endl
         << endl;

    return 0;
}