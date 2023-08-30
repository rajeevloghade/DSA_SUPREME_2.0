#include <iostream>
using namespace std;

void extremePrint(int array[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
            cout << array[start++] << " ";
        else
            cout << array[start++] << " " << array[end--] << " ";
    }
}

int main()
{

    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    extremePrint(array, size);

    return 0;
}