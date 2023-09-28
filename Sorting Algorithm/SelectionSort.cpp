#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}
int getMinimumElementIndex(vector<int> array, int startingIndex)
{
    int minimumElementIndex = startingIndex;

    for (int index = startingIndex; index < array.size() - 1; index++)
    {
        if (array[minimumElementIndex] > array[index + 1])
        {
            minimumElementIndex = index + 1;
        }
    }

    return minimumElementIndex;
}
void SelectionSort(vector<int> &array)
{
    int size = array.size();
    for (int index = 0; index < size - 1; index++)
    {
        // get minimum element index for ith index to size of array
        int minimumElementIndex = getMinimumElementIndex(array, index);
        // if minimumElementIndex element is less than current index element then swap
        swap(array[minimumElementIndex], array[index]);
    }
}
int main()
{
    vector<int> array = {3, 4, 2, 5, 1};

    cout << "Before Selection sorting : ";
    printVector(array);
    SelectionSort(array); // Selection Sort
    cout << "After Selection sorting : ";
    printVector(array);

    cout << "Time Complexity : O(n2)" << endl;
    cout << "Space Complexity : O(1)" << endl;
    return 0;
}

/**
Selection Sort
Time Complexity : O(n2)
Space Complexity : O(1)
*/