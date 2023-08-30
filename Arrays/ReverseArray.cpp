#include <iostream>
using namespace std;

void swapArrayElements(int array[], int start, int end)
{
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
}

void reverseArray(int array[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swapArrayElements(array, start++, end--);
        // swap(array[start++], array[end++]);
    }
}

void printArray(int array[], int size)
{

    for (int index = 0; index < size; index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{

    int array[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout << "Before : ";
    printArray(array, size);
    
    reverseArray(array, size);
    
    cout << "After : ";
    printArray(array, size);

    return 0;
}