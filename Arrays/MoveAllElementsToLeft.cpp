#include <iostream>
#include <vector>
using namespace std;

void moveAllNegativeToLeft(vector<int> &vector)
{

    int start = 0;
    int end = vector.size() - 1;

    while (start < end)
    {
        if (vector[start] < 0)
            start++;
        else if (vector[end] >= 0)
            end--;
        else
        {
            int temp = vector[start];
            vector[start] = vector[end];
            vector[end] = temp;
        }
    }
}

void printVector(vector<int> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vector = {1, 2, 0, -3, 4, 0, -5, 6, -0};

    moveAllNegativeToLeft(vector);
    printVector(vector);
    return 0;
}

/**

Time Complexity :  O(n)
Space Complexity : O(1)

*/