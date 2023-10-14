#include <iostream>
using namespace std;

bool isArraySorted(int array[], int size, int index)
{

    // base case (if index reaches to size)
    if (index >= size)
    {
        return true; // Array is sorted
    }

    // proccessing (if 1st index element is greater than 0th index element)
    if (array[index] > array[index - 1])
    {
        // recursive call
        return isArraySorted(array, size, index + 1);
    }
    else
    {
        return false; // Array is not sorted
    }
}

int main()
{

    int array[] = {10, 15, 20, 25, 40};
    int size = 5;
    int index = 1;

    if (isArraySorted(array, size, index))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is NOT Sorted";
    }
    return 0;
}