#include <iostream>
using namespace std;

string removeAllOccurrenceOfSubString(string input, string part)
{

    // iterate till it finds the part in input string and erase (remove/delete)
    while (input.find(part) != string::npos)
    {
        input.erase(input.find(part), part.length());
    }

    // return the same input string
    return input;
}
int main()
{
    string input = "daabcbaabcbc";
    string part = "abc";
    cout << "After removing all occurrence of substring : "
         << removeAllOccurrenceOfSubString(input, part) << endl;
}