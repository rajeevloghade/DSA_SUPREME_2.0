#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int findDuplicateNumber(vector<int> &array)
{
    int duplicateNumber = -1;
    for (int index = 0; index < array.size(); index++)
    {

        int numberAsIndex = abs(array[index]); // abs for positive value

        // is this index already visited
        if (array[numberAsIndex] < 0)
        {
            duplicateNumber = numberAsIndex;
        }

        // mark visited by making it negative
        array[numberAsIndex] *= -1;
    }
    return duplicateNumber;
}

int main()
{

    vector<int> vector = {1, 3, 4, 2, 2};

    cout << "Duplicate Number is : " << findDuplicateNumber(vector) << endl;
    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/