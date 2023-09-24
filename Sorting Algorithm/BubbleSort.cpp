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
void bubbleSort(vector<int> &array)
{
    // 1st loop till Size-1
    for (int indexOne = 0; indexOne < array.size() - 1; indexOne++)
    {
        // 2nd loop till Size-i-1
        for (int indexTwo = 0; indexTwo < array.size() - indexOne - 1; indexTwo++)
        {
            // check if indexTwo > than indexTwo+1 then swap both of them
            if (array[indexTwo] > array[indexTwo + 1])
            {
                swap(array[indexTwo], array[indexTwo + 1]);
            }
        }
    }
}
int main()
{
    vector<int> array = {5, 3, 2, 4, 1};

    cout << "Before Bubble sorting : ";
    printVector(array);
    bubbleSort(array); // Bubble Sort
    cout << "After Bubble sorting : ";
    printVector(array);

    cout << "Time Complexity : O(n2)" << endl;
    cout << "Space Complexity : O(1)" << endl;
    return 0;
}

/**
Bubble Sort
Time Complexity : O(n2)
Space Complexity : O(1)
*/