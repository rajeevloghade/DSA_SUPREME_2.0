#include <iostream>
using namespace std;

string decodeMessage(string key, string message)
{

    char start = 'a';
    char mapping[300] = {0}; // initializing array with 0

    // create mapping (substitution table)
    for (auto ch : key)
    {
        // if char is not space and it has no mapping then only map
        if (ch != ' ' && mapping[ch] == 0)
        {
            mapping[ch] = start++;
        }
    }

    string decodedMessage;
    // use mapping (substitution table)
    for (auto ch : message)
    {
        if (ch == ' ')
        {
            decodedMessage.push_back(' '); // keep space as it is
        }
        else
        {
            char decodedChar = mapping[ch]; // get decodedChar from mapping table
            decodedMessage.push_back(decodedChar);
        }
    }

    return decodedMessage;
}

int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    cout << "Decoded message is : " << decodeMessage(key, message) << endl;

    cout << "Time Complexity : O(n)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}