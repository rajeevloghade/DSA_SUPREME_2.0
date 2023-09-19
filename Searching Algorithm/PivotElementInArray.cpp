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

        if (array[mid] >= array[0])
        {
            // we are at first line on graph
            start = mid + 1;
        }
        else
        {
            // we are at second line on graph
            end = mid;
        }
    }
    return start; // we can return start(index) or end(index)
}

int main()
{

    vector<int> array = {7, 9, 1, 2, 3};

    cout << "Pivot Element in array at index : " << pivotElemetInArray(array)
         << endl;

    return 0;
}

/**
Pivot element (MINIMUM ELEMENT AS PIVOT) in the Array : draw array element in graph format

Time Complexity :  O(log n)
Space Complexity : O(1)

*/