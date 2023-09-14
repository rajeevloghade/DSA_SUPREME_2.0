#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector<int> array)
{
    int start = 0;
    int end = array.size();
    int missingElement = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int difference = array[mid] - mid;
        if (difference == 1)
        {
            start = mid + 1;
        }
        else
        {
            missingElement = array[mid] - 1;
            end = mid - 1;
        }
    }
    if (missingElement == -1)
    {
        missingElement = array.size() + 1;
    }
    return missingElement;
}

int main()
{

    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 9};

    cout << "Missing Element : " << missingElement(array) << endl;

    return 0;
}

/**
array will contain n-1 integers, means one number is missing

Time Complexity :  O(log n)
Space Complexity : O(1)

*/