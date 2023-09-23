#include <iostream>
#include <vector>
using namespace std;

int findOddOccurringElement(vector<int> array)
{
    int start = 0;
    int end = array.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end)
        {
            return start; // we can return start(index) or end(index) or mid(index)
        }
        // if mid index is ODD
        if (mid & 1)
        {
            // check if mid and m-1 is equal then go right else left side of an array
            if (array[mid] == array[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        } // if mid index is EVEN
        else
        {
            // check if mid and m+1 is equal then go right side of an array
            if (array[mid] == array[mid + 1])
            {
                start = mid + 2; //+2 bcoz +1 index already checked
            }
            else
            {
                end = mid; // mid only so that we don't lost mid(answer) element
            }
        }
    }

    return -1;
}
int main()
{

    vector<int> array = {10, 10, 2, 2, 5, 5, 3, 5, 5, 20, 20, 11, 11};

    int oddOccurringElementIndex = findOddOccurringElement(array);
    cout << "Odd occurring element in array is : "
         << array[oddOccurringElementIndex] << endl;
    return 0;
}

/**
Odd occurring element in array by Binary Search

Time Complexity :  O(log n) (n is array size here)
Space Complexity : O(1)

*/