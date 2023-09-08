#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void missingElementInArray(vector<int> array)
{

    // visiting method
    for (int index = 0; index < array.size(); index++)
    {
        int tempIndex = abs(array[index]);
        if (array[tempIndex - 1] > 0)
        {
            array[tempIndex - 1] *= -1;
        }
    }

    // now printing all positive indexes (which are missing elements only)
    cout << "Missing elements in arrays : ";
    for (int index = 0; index < array.size(); index++)
    {
        if (array[index] > 0)
            cout << index + 1 << " ";
    }
}

int main()
{

    vector<int> vector = {1, 2, 3, 5, 1};

    missingElementInArray(vector);

    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/