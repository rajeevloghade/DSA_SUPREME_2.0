#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> getIntersectionOfTwoArray(vector<int> vectorOne,
                                      vector<int> vectorTwo)
{

    vector<int> intersection;
    for (int indexVectorOne = 0; indexVectorOne < vectorOne.size();
         indexVectorOne++)
    {
        for (int indexVectorTwo = 0; indexVectorTwo < vectorTwo.size();
             indexVectorTwo++)
        {
            if (vectorOne[indexVectorOne] == vectorTwo[indexVectorTwo])
            {
                vectorTwo[indexVectorTwo] = INT_MIN;
                intersection.push_back(vectorOne[indexVectorOne]);
            }
        }
    }
    return intersection;
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

    vector<int> vectorOne = {4, 5, 6, 6};
    vector<int> vectorTwo = {1, 2, 3, 4, 6};

    cout << "Intersection of two array is : ";
    printVector(getIntersectionOfTwoArray(vectorOne, vectorTwo));

    return 0;
}