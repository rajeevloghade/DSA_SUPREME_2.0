#include <iostream>
using namespace std;

void count0sAnd1s(int array[], int size)
{
    int countZero = 0;
    int countOne = 0;
    for (int index = 0; index < size; index++)
    {
        if (array[index] == 0)
        {
            countZero++;
        }
        if (array[index] == 1)
        {
            countOne++;
        }
    }

    cout << "Count of 0s is: " << countZero << endl;
    cout << "Count of 1s is: " << countOne << endl;
}

int main()
{

    // Count 0s and 1s
    int array[] = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0};
    int size = 12;

    count0sAnd1s(array, size);

    return 0;
}