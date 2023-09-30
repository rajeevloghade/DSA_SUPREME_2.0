#include <iostream>
using namespace std;

// check pellindrome by 2 pointer
bool isPellindrome(string input, int start, int end)
{
    while (start <= end)
    {
        if (input[start] == input[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validPellindrome(string input)
{
    int start = 0;
    int end = input.length() - 1;

    while (start <= end)
    {
        // if start and end matches then keep going
        if (input[start] == input[end])
        {
            start++;
            end--;
        }
        else
        {
            // if start and end doesn't matche then remove either start(first) char or
            // end(last) char to check pellindrom for remaining string
            bool removedFirstChar = isPellindrome(input, start + 1, end);
            bool removedLastChar = isPellindrome(input, start, end - 1);
            return removedFirstChar || removedLastChar;
        }
    }
    return true;
}
int main()
{
    string input = "abca";

    if (validPellindrome(input) != 0)
    {
        cout << "YES : " << input
             << " is Valid Pellindrome after removing atmost one char" << endl;
    }
    else
    {
        cout << "NO : " << input
             << " is NOT Valid Pellindrome after removing atmost one char" << endl;
    }

    cout << "Time Complexity : O(n)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}