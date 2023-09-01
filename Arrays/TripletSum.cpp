#include <iostream>
#include <vector>
using namespace std;

void tripletSum(vector<int> vector)
{

    int sum;
    cout << "Enter value of SUM: ";
    cin >> sum;

    for (int indexOne = 0; indexOne < vector.size(); indexOne++)
    {
        for (int indexTwo = indexOne + 1; indexTwo < vector.size(); indexTwo++)
        {
            for (int indexThree = indexTwo + 1; indexThree < vector.size(); indexThree++)
                if (vector[indexOne] + vector[indexTwo] + vector[indexThree] == sum)
                {
                    cout << vector[indexOne] << ", " << vector[indexTwo] << ", " << vector[indexThree] << endl;
                }
        }
    }
}

int main()
{
    vector<int> vector = {10, 20, 30, 40, 50, 60, 70, 80};
    tripletSum(vector);
    return 0;
}