#include <iostream>
#include <vector>
using namespace std;

int searchInNearlySortedArray(vector<int> array, int key)
{

    int size = array.size();
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // check mid-1 index
        if (mid - 1 >= 0 && array[mid - 1] == key)
        {
            return mid - 1;
        } // check mid index
        else if (array[mid] == key)
        {
            return mid;
        } // check mid+1 index
        else if (mid + 1 < size && array[mid + 1] == key)
        {
            return mid + 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 2; //+2 bcoz +1 element already checked
        }
        else
        {
            end = mid - 2; //-2 bcoz -1 element already checked
        }
    }
    return -1;
}
int main()
{

    vector<int> array = {20, 10, 30, 50, 40, 70, 60};
    int key;
    cout << "Please enter your key : ";
    cin >> key;

    int keyIndex = searchInNearlySortedArray(array, key);

    if (keyIndex != -1)
    {
        cout << "Key is found at : " << keyIndex << endl;
    }
    else
    {
        cout << "Key NOT found" << endl;
    }
    return 0;
}

/**
Search In Nearly Sorted Array by Binary Search

Time Complexity :  O(log n) (n is array size here)
Space Complexity : O(1)

*/