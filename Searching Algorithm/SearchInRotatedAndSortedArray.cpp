#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int> array)
{
    int size = array.size() - 1;
    int start = 0;
    int end = size;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // special case handle for(16 (mid-1) > 2 (mid))
        // also check for index size within array index range
        if (mid - 1 >= 0 && array[mid] < array[mid - 1])
        {
            return mid - 1;
        } // special case handle for(16 (mid) > 2 (mid+1))
        // also check for index size within array index range
        else if (mid + 1 < size && array[mid] > array[mid + 1])
        {
            return mid;
        }
        else if (start == end)
        {
            // single element
            return start; // we can return start(index) or end(index) or mid(index)
        }
        else if (array[start] < array[mid])
        {
            // we are at B line on graph, check right side of an array
            start = mid + 1;
        }
        else
        {
            // we are at A line on graph, check left side of an array
            end = mid - 1;
        }
    }

    return -1;
}

int binarySearch(vector<int> array, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int main()
{

    vector<int> array = {12, 14, 16, 2, 4, 6, 8, 10};
    int key;
    cout << "Please enter key : ";
    cin >> key;
    int pivotIndex = pivotElement(array);
    cout << "Pivot Index is : " << pivotIndex << endl;

    int keyIndex = -1;
    // Search in A line
    if (key >= array[0] && key <= array[pivotIndex])
    {
        keyIndex = binarySearch(array, 0, pivotIndex, key);
    }
    // Search in A line
    else
    {
        keyIndex = binarySearch(array, pivotIndex + 1, array.size() - 1, key);
    }

    if (keyIndex != -1)
    {
        cout << "Key fount at : " << keyIndex << " index." << endl;
    }
    else
    {   
        cout << "Key NOT found." << endl;
    }

    return 0;
}

/**
Search element in Rotate and Sorted Array : draw array element in graph format

Time Complexity :  O(log n)
Space Complexity : O(1)

*/