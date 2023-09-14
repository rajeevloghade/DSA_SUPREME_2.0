#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector<int> array)
{
    int arraySum = 0;
    int size = array.size();

    // sum of all elements of an array
    for (int index = 0; index < size; index++)
    {
        arraySum += array[index];
    }

    // sum of all elements [0,n] of an array
    int totalSum = ((size) * (size + 1)) / 2;

    return (totalSum - arraySum);
}

int main()
{

    vector<int> array = {0, 1, 2, 3, 4, 6};

    cout << "Missing Element : " << missingElement(array);

    return 0;
}

/**
number will be [0,n] (0 to n only)

Time Complexity :  O(n)
Space Complexity : O(1)

*/