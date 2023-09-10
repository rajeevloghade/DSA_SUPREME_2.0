#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// By using unordered_map
// Store count in map then check (count > 1) then return (index+1)
int firstRepeated(vector<int> array)
{
    unordered_map<int, int> hashMap;

    for (int index = 0; index < array.size(); index++)
    {
        hashMap[array[index]]++;
    }

    for (int index = 0; index < array.size(); index++)
    {
        if (hashMap[array[index]] > 1)
        {
            return index + 1;
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

Time Complexity :  O(n)
Space Complexity : O(n)

*/