#include <iostream>
using namespace std;

string removeAllAdjacentDuplicates(string input)
{
    string output = "";

    for (int index = 0; index < input.length(); index++)
    {
        // insert into temp string if temp string's right most element doesn't match
        // with input string current element
        if (output.length() >= 0 && input[index] != output[output.length() - 1])
        {
            output.push_back(input[index]);
        }
        else
        {
            // delete if matches
            output.pop_back();
        }
    }

    return output;
}
int main()
{
    string input;
    cout << "Please enter your input string: ";
    cin >> input;
    cout << "After removing all adjacent duplicate : "
         << removeAllAdjacentDuplicates(input) << endl;
    cout << "Time Complexity : O(n)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}