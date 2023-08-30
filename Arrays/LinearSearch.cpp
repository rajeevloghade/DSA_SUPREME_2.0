#include <iostream>
using namespace std;

bool isKeyPresent(int array[], int size, int key)
{

    for (int index = 0; index < size; index++)
    {
        if (array[index] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    // Linear Search
    int array[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int key;
    cout << "Enter your key : ";
    cin >> key;

    if (isKeyPresent(array, size, key))
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is NOT present" << endl;
    }

    return 0;
}