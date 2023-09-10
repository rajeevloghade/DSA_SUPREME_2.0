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

// Common Elements in 3 Sorted arrays
vector<int> commmonElements(vector<int> vectorA, vector<int> vectorB,
                            vector<int> vectorC)
{

    vector<int> tempVector;
    set<int> tempSet;
    int indexOne = 0, indexTwo = 0, indexThree = 0;

    while (indexOne < vectorA.size() && indexTwo < vectorB.size() &&
           indexThree < vectorC.size())
    {

        if (vectorA[indexOne] == vectorB[indexTwo] &&
            vectorB[indexTwo] == vectorC[indexThree])
        {
            tempSet.insert(vectorA[indexOne]);
            indexOne++;
            indexTwo++;
            indexThree++;
        }
        else if (vectorA[indexOne] < vectorB[indexTwo])
        {
            indexOne++;
        }
        else if (vectorB[indexTwo] < vectorC[indexThree])
        {
            indexTwo++;
        }
        else
        {
            indexThree++;
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

    vector<int> vectorA = {1, 3, 6, 44, 60, 78};
    vector<int> vectorB = {4, 7, 44, 78};
    vector<int> vectorC = {7, 3, 44, 50, 70, 78, 80};

    cout << "Common Elements in 3 Sorted arrays : ";
    printVector(commmonElements(vectorA, vectorB, vectorC));
    return 0;
}

/**

Time Complexity :  O(n1+n2+n3)
Space Complexity : O(n)(minimum: vectorB) (maximum: vectorC)

*/