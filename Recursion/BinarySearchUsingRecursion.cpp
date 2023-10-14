#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> array, int start, int end, int key)
{

    // base case
    if (start > end)
    {
        return -1;
    }

    // find out mid index
    int mid = start + (end - start) / 2;

    // 1st case
    if (array[mid] == key)
    {
        return mid; // key found
    }
    // rest cases by recursion
    else if (array[mid] < key)
    {
        // search in right side of an array
        // start = mid+1
        return binarySearch(array, mid + 1, end, key);
    }
    else
    {
        // search in left side of an array
        // end = mid-1
        return binarySearch(array, start, mid - 1, key);
    }
}

int main()
{

    vector<int> array = {10, 20, 30, 40, 50};
    int start = 0;
    int end = array.size() - 1;

    int key;
    cout << "Please enter key to find : ";
    cin >> key;

    int isKeyExist = binarySearch(array, start, end, key);

    if (isKeyExist != -1)
    {
        cout << "Key found at : " << isKeyExist << endl;
    }
    else
    {
        cout << "Key NOT found.";
    }

    return 0;
}