#include <iostream>
using namespace std;

int expand(string input, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < input.length() && input[i] == input[j])
    {
        count++; // count++ if both char is same
        i--;     // move i in backward direction
        j++;     // move j in forward direction
    }
    return count;
}

int palindromicSubstrings(string input)
{

    int totalPalindromicSubstrings = 0;

    for (int center = 0; center < input.length(); center++)
    {
        // for ODD (both pointer will point single char)
        int oddPalindromicSubstrings = expand(input, center, center);
        // for EVEN (if ith pointer will point 0th char the jth pointer will point 1st char)
        int evenPalindromicSubstrings = expand(input, center, center + 1);

        // sum of all the counts
        totalPalindromicSubstrings = totalPalindromicSubstrings + oddPalindromicSubstrings + evenPalindromicSubstrings;
    }

    return totalPalindromicSubstrings;
}

int main()
{
    string input = "madam";
    cout << "Count of Palindromic Substrings : " << palindromicSubstrings(input)
         << endl;
    cout << "Time Complexity : O(n2)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}