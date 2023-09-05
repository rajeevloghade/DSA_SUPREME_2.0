#include <iostream>
#include <vector>
using namespace std;

int findDuplicateNumber(vector<int> &array)
{

    int answer = 0;
    int duplicateNumber = -1;
    for (int index = 0; index < array.size(); index++)
    {
        for (int indexTemp = index + 1; indexTemp < array.size(); indexTemp++)
        {
            if (array[index] == array[indexTemp])
            {
                duplicateNumber = array[indexTemp];
                break;
            }
        }
    }
    return duplicateNumber;
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

    vector<int> vector = {1, 3, 4, 5, 2, 9, 6, 8, 9, 9, 7};

    cout << "Duplicate Number is : " << findDuplicateNumber(vector) << endl;
    return 0;
}

/**

Time Complexity :  O(n2)
Space Complexity : O(1)

*/