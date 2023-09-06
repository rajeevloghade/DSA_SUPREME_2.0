#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// Positioning method
int findDuplicateNumber(vector<int> &array)
{

    // if 0th index element is not equal to array[0th index element] then swap
    // else return 0th index element
    while (array[0] != array[array[0]])
    {
        // swap elements
        swap(array[0], array[array[0]]);
    }

    return array[0];
}

int main()
{

    vector<int> vector = {4, 2, 3, 3, 1};

    cout << "Duplicate Number is : " << findDuplicateNumber(vector) << endl;

    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/