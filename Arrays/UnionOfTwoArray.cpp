#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> getUnionOfTwoArray(vector<int> vectorOne, vector<int> vectorTwo)
{

    vector<int> unionArray;

    // Marking duplicate element by INT_MIN in second array
    for (int indexVectorOne = 0; indexVectorOne < vectorOne.size();
         indexVectorOne++)
    {
        for (int indexVectorTwo = 0; indexVectorTwo < vectorTwo.size();
             indexVectorTwo++)
        {
            if (vectorOne[indexVectorOne] == vectorTwo[indexVectorTwo])
                vectorTwo[indexVectorTwo] = INT_MIN;
        }
    }

    // Inserting first array in unionArray
    for (int index = 0; index < vectorOne.size(); index++)
    {
        unionArray.push_back(vectorOne[index]);
    }
    // Inserting second array in unionArray without INT_MIN
    for (int index = 0; index < vectorTwo.size(); index++)
    {
        if (vectorTwo[index] != INT_MIN)
            unionArray.push_back(vectorTwo[index]);
    }

    return unionArray;
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

    vector<int> vectorOne = {1, 2, 3, 4};
    vector<int> vectorTwo = {4, 5, 6};

    cout << "Union of two array is : ";
    printVector(getUnionOfTwoArray(vectorOne, vectorTwo));

    return 0;
}