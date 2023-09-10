#include <iostream>
#include <vector>
using namespace std;

// Without using unordered_map, creating own hash map
// Store count in map then check (count > 1) then return (index+1)

int firstRepeated(vector<int> array)
{

    // create an array of max element size
    vector<int> customHashMap(array.size(), 0);

    for (int index = 0; index < customHashMap.size(); index++)
    {
        customHashMap[array[index]]++;
    }

    for (int index = 0; index < customHashMap.size(); index++)
    {
        if (customHashMap[array[index]] > 1)
            return index + 1;
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