#include <iostream>
#include <vector>
using namespace std;

void missingElementInArray(vector<int> array)
{

    int index = 0;
    while (index < array.size())
    {
        int tempIndex = array[index] - 1;

        if (array[index] != array[tempIndex])
        {
            swap(array[index], array[tempIndex]);
        }
        else
        {
            index++;
        }
    }

    cout << "Missing element in array is : ";
    for (int index = 0; index < array.size(); index++)
    {
        if (array[index] != index + 1)
        {
            cout << index + 1 << " ";
        }
    }
}

int main()
{

    vector<int> vector = {1, 3, 5, 3, 4};

    missingElementInArray(vector);

    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/