#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryConversionByDivisionMethod(int number)
{
    int binaryNumber = 0;
    int i = 0;
    while (number)
    {
        int bit = number % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        number /= 2;
    }
    return binaryNumber;
}

int decimalToBinaryConversionByBitwiseMethod(int number)
{
    int binaryNumber = 0;
    int i = 0;
    while (number)
    {
        int bit = number & 1;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        number >>= 1;
    }
    return binaryNumber;
}

int main()
{
    int number;
    cout << "Enter the number to convert into binary : ";
    cin >> number;

    cout << "Decimal to Binary conversion by Division method of " << number << " is : " << decimalToBinaryConversionByDivisionMethod(number) << endl;
    cout << "Decimal to Binary conversion by Bitwise method of " << number << " is : " << decimalToBinaryConversionByBitwiseMethod(number);
}