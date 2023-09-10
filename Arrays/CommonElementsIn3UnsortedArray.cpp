#include <iostream>
#include <set>
#include <vector>
using namespace std;

void printVector(vector<int> array)
{
    for (int index = 0; index < array.size(); index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

// Common Elements in 3 unsorted arrays
vector<int> commmonElements(vector<int> vectorA, vector<int> vectorB,
                            vector<int> vectorC)
{

    vector<int> tempVector;
    set<int> tempSet;

    // comparing all element of vectorA and vectorB
    for (int index = 0; index < vectorA.size(); index++)
    {
        for (int secondIndex = 0; secondIndex < vectorB.size(); secondIndex++)
        {
            if (vectorA[index] == vectorB[secondIndex])
            {
                tempSet.insert(vectorA[index]);
            }
        }
    }

    // comparing all element of vectorB and vectorC
    for (int index = 0; index < vectorB.size(); index++)
    {
        for (int secondIndex = 0; secondIndex < tempVector.size(); secondIndex++)
        {
            if (vectorB[index] == vectorC[secondIndex])
            {
                tempSet.insert(vectorC[index]);
            }
        }
    }

    // push all element of set into vector
    for (auto value : tempSet)
    {
        tempVector.push_back(value);
    }
    return tempVector;
}

int main()
{

    vector<int> vectorA = {1, 3, 6, 20, 40, 60};
    vector<int> vectorB = {40, 4, 7, 20};
    vector<int> vectorC = {50, 7, 3, 70, 20, 80, 40};

    printVector(commmonElements(vectorA, vectorB, vectorC));
    return 0;
}

/**

Time Complexity :  O(n2)
Space Complexity : O(n)(minimum: vectorB) (maximum: vectorC)

*/