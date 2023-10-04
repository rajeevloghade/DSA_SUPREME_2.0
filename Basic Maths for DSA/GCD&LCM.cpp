#include <iostream>
using namespace std;

int getGCD(int numberOne, int numberTwo)
{

    if (numberOne == 0)
        return numberTwo;
    if (numberTwo == 0)
        return numberOne;

    while (numberOne > 0 && numberTwo > 0)
    {
        if (numberOne > numberTwo)
        {
            numberOne = numberOne - numberTwo;
        }
        else
        {
            numberTwo = numberTwo - numberOne;
        }
    }

    return numberOne == 0 ? numberTwo : numberOne;
}
int main()
{

    int numberOne;
    cout << "Please enter your numberOne : ";
    cin >> numberOne;

    int numberTwo;
    cout << "Please enter your numberTwo : ";
    cin >> numberTwo;

    cout << "GCD of " << numberOne << " and " << numberTwo
         << " is : " << getGCD(numberOne, numberTwo) << endl;

    cout << "LCM of " << numberOne << " and " << numberTwo
         << " is : " << (numberOne * numberTwo) / getGCD(numberOne, numberTwo)
         << endl;

    return 0;
}