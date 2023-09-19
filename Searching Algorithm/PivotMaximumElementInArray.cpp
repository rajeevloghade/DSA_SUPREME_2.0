#include <iostream>
#include <vector>
using namespace std;

int pivotElemetInArray(vector<int> array)
{
    int start = 0;
    int end = array.size();

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // special case handle for(16 (mid-1) > 2 (mid))
        if (array[mid] < array[mid - 1])
        {
            return mid - 1;
        } // special case handle for(16 (mid) > 2 (mid+1))
        else if (array[mid] > array[mid + 1])
        {
            return mid;
        }
        else if (start == end)
        {
            // single element
            return start; // we can return start(index) or end(index) or mid(index)
        }
        else if (array[start] > array[mid])
        { // we are at first line on graph, check left side of an array
            end = mid - 1;
        }

        else
        { // we are at second line on graph, check right side of an array
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> array = {12, 14, 16, 2, 4, 6, 8, 10};

    cout << "Pivot Element (MAXIMUM ELEMENT AS PIVOT) in array at index : " << pivotElemetInArray(array)
         << endl;

    return 0;
}

/**
Pivot element (MAXIMUM ELEMENT AS PIVOT) in the Array : draw array element in graph format

Time Complexity :  O(log n)
Space Complexity : O(1)

*/