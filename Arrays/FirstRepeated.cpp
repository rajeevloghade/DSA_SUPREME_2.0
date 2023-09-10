#include <iostream>
#include <vector>
using namespace std;

int firstRepeated(vector<int> array)
{

    for (int index = 0; index < array.size(); index++)
    {
        for (int secondIndex = index + 1; secondIndex < array.size();
             secondIndex++)
        {
            if (array[index] == array[secondIndex])
            {
                return index + 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> vector = {1, 5, 3, 4, 3, 5, 6};

    cout << "First Repeated element(return index of it) in array is : "
         << firstRepeated(vector);

    return 0;
}

/**

Time Complexity :  O(n2)
Space Complexity : O(1)

we can get TLE: Time Limit Exceeded

*/