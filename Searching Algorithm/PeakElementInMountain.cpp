#include <iostream>
#include <vector>
using namespace std;

int peakElementInMountain(vector<int> array)
{
    int start = 0;
    int end = array.size();
    int peakElement = 0;

    // loop should run till start less than end other wise it will become infinite loop
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] < array[mid + 1])
        {
            // here we may be at the peak element or right side of it
            start = mid + 1;
        }
        else
        {
            // here we may be at the peak element or right side of it, then store element and point end to mid position
            peakElement = array[mid];
            end = mid;
        }
    }
    return peakElement;
}

int main()
{

    vector<int> array = {10, 20, 30, 50, 40, 30, 20};

    cout << "Peak Element in the Mountain : " << peakElementInMountain(array) << endl;

    return 0;
}

/**
peak element in the mountain : draw array element in graph format

Time Complexity :  O(log n)
Space Complexity : O(1)

*/