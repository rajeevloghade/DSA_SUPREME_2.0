#include <iostream>
#include <vector>
using namespace std;

vector<int> sort0sAnd1s(vector<int> vector)
{

    int start = 0;
    int end = vector.size() - 1;

    while (start < end)
    {
        if (vector[start] == 0)
            start++;
        else if (vector[end] == 1)
            end--;
        else
        {
            int temp = vector[start];
            vector[start] = vector[end];
            vector[end] = temp;
        }
    }

    return vector;
}

void printVector(vector<int> array)
{
    cout << "Vector : ";
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vector = {1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1};

    cout << "After sorting 0s and 1s ";
    printVector(sort0sAnd1s(vector));
    return 0;
}