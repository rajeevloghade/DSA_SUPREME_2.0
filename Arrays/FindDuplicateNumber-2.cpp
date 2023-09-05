#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int findDuplicateNumber(vector<int> &array)
{

    // first sort array
    sort(array.begin(), array.end());
    for (int index = 0; index < array.size() - 1; index++)
    {
        if (array[index] == array[index + 1])
        {
            return array[index + 1];
        }
    }
    return -1;
}

int main()
{

    vector<int> vector = {1, 3, 4, 2, 2};

    cout << "Duplicate Number is : " << findDuplicateNumber(vector) << endl;
    return 0;
}

/**

Time Complexity :  O(nlogn) for sorting function
Space Complexity : O(n) worst complexity for sorting function

*/