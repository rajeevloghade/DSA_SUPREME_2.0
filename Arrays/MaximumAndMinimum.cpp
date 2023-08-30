#include <iostream>
#include <limits.h>
using namespace std;

int maxInArray(int array[], int size)
{

    int max = INT_MIN;
    for (int index = 0; index < size; index++)
    {
        if (max < array[index])
        {
            max = array[index];
        }
    }

    return max;
}

int minInArray(int array[], int size)
{

    int min = INT_MAX;
    for (int index = 0; index < size; index++)
    {
        if (min > array[index])
        {
            min = array[index];
        }
    }

    return min;
}

int main()
{

    // Linear Search
    int array[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout << "Maximum value in array is : " << maxInArray(array, size) << endl;
    cout << "Minimum value in array is : " << minInArray(array, size) << endl;

    return 0;
}