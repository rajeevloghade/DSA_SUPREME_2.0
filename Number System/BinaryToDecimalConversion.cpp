#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimalConversionByDivisionMethod(int number)
{
    int decimalNumber = 0;
    int i = 0;
    while (number)
    {
        int bit = number % 10;
        decimalNumber = bit * pow(2, i++) + decimalNumber;
        number /= 10;
    }
    return decimalNumber;
}

int binaryToDecimalConversionByBitwiseMethod(int number)
{
    int decimalNumber = 0;
    int i = 0;
    while (number)
    {
        int bit = number & 1;
        decimalNumber = bit * pow(2, i++) + decimalNumber;
        number /= 10;
    }
    return decimalNumber;
}

int main()
{
    int number;
    cout << "Enter the number to convert into decimal : ";
    cin >> number;

    cout << "Binary to Decimal conversion by Division method of " << number << " is : " << binaryToDecimalConversionByDivisionMethod(number) << endl;
    cout << "Binary to Decimal conversion by Division method of " << number << " is : " << binaryToDecimalConversionByBitwiseMethod(number);
}