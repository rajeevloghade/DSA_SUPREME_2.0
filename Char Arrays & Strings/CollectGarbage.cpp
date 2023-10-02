#include <iostream>
#include <vector>
using namespace std;

int garbageCollection(vector<string> &garbage, vector<int> &travel)
{

    // pickup timings
    int pickP = 0;
    int pickG = 0;
    int pickM = 0;

    // last index of garbages
    int lastP = 0;
    int lastG = 0;
    int lastM = 0;

    // travel timings
    int travelP = 0;
    int travelG = 0;
    int travelM = 0;

    // traverse all garbage
    for (int index = 0; index < garbage.size(); index++)
    {
        // traverse all str char
        for (char ch : garbage[index])
        {
            if (ch == 'P')
            {
                pickP++;       // calculate Pickup time for P
                lastP = index; // last index of P
            }
            else if (ch == 'G')
            {
                pickG++;       // calculate Pickup time for G
                lastG = index; // last index of G
            }
            else if (ch == 'M')
            {
                pickM++;       // calculate Pickup time for M
                lastM = index; // last index of M
            }
        }
    }

    // calculate trave time for P
    for (int index = 0; index < lastP; index++)
    {
        travelP += travel[index];
    }
    // calculate trave time for M
    for (int index = 0; index < lastM; index++)
    {
        travelM += travel[index];
    }
    // calculate trave time for G
    for (int index = 0; index < lastG; index++)
    {
        travelG += travel[index];
    }

    // sum of all pickup and travel time and return
    return (pickG + travelG) + (pickM + travelM) + (pickP + travelP);
}

int main()
{

    vector<string> garbage = {"G", "P", "PG", "GG"};
    vector<int> travel = {2, 4, 3};

    cout << "CASE I :" << endl;
    cout << "Total time to collect all grabage : "
         << garbageCollection(garbage, travel) << endl
         << endl;

    vector<string> garbage2 = {"PP", "GPM", "M", "G", "P", "H", "GPM"};
    vector<int> travel2 = {2, 4, 3, 2, 5, 7};

    cout << "CASE II :" << endl;
    cout << "Total time to collect all grabage : "
         << garbageCollection(garbage2, travel2) << endl
         << endl;

    cout << "Time Complexity : O(n)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}