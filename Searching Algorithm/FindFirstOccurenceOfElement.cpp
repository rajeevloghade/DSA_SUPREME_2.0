#include <iostream>
#include <vector>
using namespace std;

int firstOccurrenceOfElement(vector<int> array, int key)
{

    int start = 0;
    int end = array.size() - 1;
    int firstIndex = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // first check key with target, if it matches then check left side of array
        if (array[mid] == key)
        {
            firstIndex = mid;
            end = mid - 1;
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
    return firstIndex;
}

int main()
{
    vector<int> array = {1, 2, 4, 4, 4, 4, 4, 8, 9, 10};

    int key;
    cout << "Enter you key value : ";
    cin >> key;

    int firstOccurrence = firstOccurrenceOfElement(array, key);

    if (firstOccurrence != -1)
    {
        cout << "First Occurence of " << key << " is : " << firstOccurrence << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    return 0;
}