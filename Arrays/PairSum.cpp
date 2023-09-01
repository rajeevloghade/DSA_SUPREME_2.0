#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> vector)
{

    int sum;
    cout << "Enter value of SUM: ";
    cin >> sum;

    for (int indexOne = 0; indexOne < vector.size(); indexOne++)
    {
        for (int indexTwo = indexOne + 1; indexTwo < vector.size(); indexTwo++)
        {
            if (vector[indexOne] + vector[indexTwo] == sum)
            {
                cout << vector[indexOne] << ", " << vector[indexTwo] << endl;
            }
        }
    }
}

int main()
{
    vector<int> vector = {10, 20, 30, 40, 50};
    pairSum(vector);
    return 0;
}