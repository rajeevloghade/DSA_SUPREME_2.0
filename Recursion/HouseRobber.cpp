#include <iostream>
#include <vector>
using namespace std;

int houseRobber(vector<int> houseWithMoney, int size, int index)
{

    // base case (if index reaches to size)
    if (index >= size)
    {
        return 0;
    }
    // rob zeroth index
    int moneyRobbed1 = houseWithMoney[index] + houseRobber(houseWithMoney, size, index + 2); // index+2 : because recursion will rob from 2th index

    // don't rob zeroth index
    int moneyRobbed2 = houseRobber(houseWithMoney, size, index + 1); // index+2 : because recursion will rob from 1th index

    return max(moneyRobbed1, moneyRobbed2); // max
}
int main()
{

    vector<int> houseWithMoney = {1, 2, 3, 1};
    int size = houseWithMoney.size();
    int index = 0;

    cout << "Max money by robbing houses : " << houseRobber(houseWithMoney, size, index) << endl;

    return 0;
}
/**
EXLORE ALL POSSIBLE WAYS (IMPORTANT CONCEPT) OF RECURSION

House Robber (important question) : it can be done using DP without TLE

 **/