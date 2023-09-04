#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}
void sort0s1s2s(vector<int> &array)
{

    int zeros = 0;
    int ones = 0;
    int twos = 0;

    for (int index = 0; index < array.size(); index++)
    {

        if (array[index] == 0)
        {
            zeros++;
        }
        else if (array[index] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    int tempIndex = 0;
    while (zeros--)
    {
        array[tempIndex++] = 0;
    }

    while (ones--)
    {
        array[tempIndex++] = 1;
    }
    while (twos--)
    {
        array[tempIndex++] = 2;
    }
}

int main()
{

    vector<int> array{2, 0, 2, 1, 1, 0};

    // By counting method : first count all 0, 1 and 2 then insert into the same array
    sort0s1s2s(array);
    printArray(array);

    return 0;
}

/**

Time Complexity : O(n+n) -> O(2n) -> O(n)
Space Complexity : O(1)

*/