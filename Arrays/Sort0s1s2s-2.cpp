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

    int start = 0;
    int mid = 0;
    int end = array.size() - 1;

    while (mid <= end)
    {

        if (array[mid] == 0)
        {
            int temp = array[mid];
            array[mid] = array[start];
            array[start] = temp;
            start++;
            mid++;
        }
        else if (array[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = array[mid];
            array[mid] = array[end];
            array[end] = temp;
            end--;
        }
    }
}

int main()
{

    vector<int> array{1, 1, 0, 2, 0, 1, 2, 0, 1};

    sort0s1s2s(array);
    printArray(array);

    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/