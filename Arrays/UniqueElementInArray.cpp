#include <iostream>
#include <vector>
using namespace std;

int getUniqueElement(vector<int> array)
{
    int uniqueElement = 0;
    for (int index = 0; index < array.size(); index++)
    {
        uniqueElement = uniqueElement ^ array[index];
    }
    return uniqueElement;
}

int main()
{

    int size;
    cout << "Please enter size of vector : ";
    cin >> size;
    vector<int> array(size);

    cout << "Please enter " << size << " elements for vector : ";
    for (int index = 0; index < array.size(); index++)
    {
        cin >> array[index];
    }

    cout << "Unique elements from array is : " << getUniqueElement(array) << endl;

    return 0;
}