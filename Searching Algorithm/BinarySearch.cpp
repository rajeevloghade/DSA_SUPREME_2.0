#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> array, int key)
{

    int start = 0;
    int end = array.size() - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2;  //it can lead to integer overflow
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            // if element is equal to key then return index
            return mid;
        }
        else if (array[mid] < key)
        {
            // if key is greater than key then check right side of array
            start = mid + 1;
        }
        else
        {
            // if key is less than key then check left side of array
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int key;
    cout << "Enter you key value : ";
    cin >> key;
    int index = binarySearch(array, key);
    if (index != -1)
    {
        cout << "Found at : " << index;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}