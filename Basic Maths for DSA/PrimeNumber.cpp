#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>
using namespace std;

int getTotalCountOfPrimeNumberBySieveOfEratosthenes(int number)
{
    if (number == 0)
        return false;

    vector<bool> prime(number, true); // all are marked prime already
    prime[0] = prime[1] = false;

    int totalCountOfPrimeNumber = 0;

    for (int index = 2; index < number; index++)
    {
        if (prime[index])
        {
            totalCountOfPrimeNumber++;
            int table = 2 * index; // table for ith index
            while (table < number)
            {
                prime[table] = false; // mark not prime for (ith number table)
                table += index;       // increment it by index
            }
        }
    }
    return totalCountOfPrimeNumber;
}

bool isPrimeBySQRT(int number)
{
    // if number is 0 or 1 return false
    if (number <= 1)
        return false;
    int sqrtNumber = sqrt(number);
    for (int index = 2; index <= sqrtNumber; index++)
    {
        if ((number % index) == 0) // if remainder is 0 NOT a Prime number
            return false;
    }

    return true;
}

int getTotalCountOfPrimeNumberBySQRT(int number)
{
    int totalCountOfPrimeNumber = 0;
    for (int index = 2; index < number; index++)
    {
        if (isPrimeBySQRT(index))
        {
            totalCountOfPrimeNumber++;
        }
    }
    return totalCountOfPrimeNumber;
}

bool isPrime(int number)
{
    // if number is 0 or 1 return false
    if (number <= 1)
        return false;

    for (int index = 2; index < number; index++)
    {
        if ((number % index) == 0) // if remainder is 0 then NOT a Prime number
            return false;
    }

    return true;
}

int getTotalCountOfPrimeNumber(int number)
{
    int totalCountOfPrimeNumber = 0;
    for (int index = 2; index < number; index++)
    {
        if (isPrime(index))
        {
            totalCountOfPrimeNumber++;
        }
    }
    return totalCountOfPrimeNumber;
}
int main()
{

    int number;
    cout << "Please enter your number : ";
    cin >> number;

    cout << "1. Naive Approach : Total number of prime is : "
         << getTotalCountOfPrimeNumber(number) << endl;
    cout << "Time Complexity : O(n2)" << endl;
    cout << "Space Complexity : O(1)" << endl
         << endl;

    cout << "2. Square Root Approach : Total number of prime is : "
         << getTotalCountOfPrimeNumberBySQRT(number) << endl;
    cout << "Time Complexity : O(n*sqrt(n))" << endl;
    cout << "Space Complexity : O(1)" << endl
         << endl;

    cout << "3. Sieve of Eratosthenes Approach : Total number of prime is : "
         << getTotalCountOfPrimeNumberBySieveOfEratosthenes(number) << endl;
    cout << "Time Complexity : O(n*log(log n))" << endl;
    cout << "Space Complexity : O(1)" << endl;
    
    return 0;
}