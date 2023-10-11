#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

bool searchElement(int array[], int size, int index, int target)
{

    if (index >= size)
    {
        return false;
    }
    if (array[index] == target)
    {
        return true;
    }

    return searchElement(array, size, index + 1, target);
}

void printArrayUsingRecursion(int array[], int size, int index)
{

    // base case
    if (index >= size)
    {
        return;
    }
    // processing
    cout << array[index] << " ";
    // recursive call
    printArrayUsingRecursion(array, size, index + 1);
}

void minimumElement(int array[], int size, int &min, int index)
{
    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    if (array[index] < min)
    {
        min = array[index];
    }

    // recursive call
    minimumElement(array, size, min, index + 1);
}

void maximumElement(int array[], int size, int &max, int index)
{
    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    if (array[index] > max)
    {
        max = array[index];
    }

    // recursive call
    maximumElement(array, size, max, index + 1);
}

void getEvenFromArray(int array[], int size, int index, vector<int> &evenValues)
{

    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    if (array[index] % 2 == 0)
    {
        evenValues.push_back(array[index]);
    }

    // recursive call
    getEvenFromArray(array, size, index + 1, evenValues);
}

void doubleTheArrayValues(int array[], int size, int index)
{

    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    array[index] = array[index] * 2;

    // recursive call
    doubleTheArrayValues(array, size, index + 1);
}

void indexOfAllOccurenceOfTarget(int array[], int size, int index, int target)
{

    // base case
    if (index >= size)
    {
        return;
    }

    // processing
    if (array[index] == target)
    {
        cout << index << " ";
    }

    // recursive call
    indexOfAllOccurenceOfTarget(array, size, index + 1, target);
}

void getDigitFromNumber(int number)
{

    // base case
    if (number == 0)
    {
        return;
    }

    // processing
    int digit = number % 10;
    number /= 10;

    // recursive call
    getDigitFromNumber(number);

    // processing
    cout << digit << " ";
}

int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int index = 0;
    printArrayUsingRecursion(array, size, index);
    cout << endl;

    int target = 4;
    cout << "Target " << target << " found: " << searchElement(array, size, index, target) << endl;

    int min = INT_MAX;
    minimumElement(array, size, min, index);
    cout << "Minimum element in array: " << min << endl;

    int max = INT_MIN;
    maximumElement(array, size, max, index);
    cout << "Maximum element in array: " << max << endl;

    vector<int> evenValues;
    getEvenFromArray(array, size, index, evenValues);

    cout << "Get even values from array : ";
    for (int value : evenValues)
    {
        cout << value << " ";
    }
    cout << endl;

    cout << "Index Of All Occurence Of Target : ";
    indexOfAllOccurenceOfTarget(array, size, index, target);
    cout << endl;

    int number = 4215;
    cout << "Get Digit From Number : ";
    getDigitFromNumber(number);
    cout << endl;

    cout << "Double the array values : ";
    doubleTheArrayValues(array, size, index);
    for (int value : array)
    {
        cout << value << " ";
    }

    return 0;
}