#include <iostream>
#include <vector>
using namespace std;

void subSequenceOfString(string str, string output, int index, vector<string> &subSequences)
{

    // base case
    if (index >= str.length())
    {
        subSequences.push_back(output);
        return;
    }

    // proccsessing
    // exclude (excluding nothing)
    // recursive call
    subSequenceOfString(str, output, index + 1, subSequences);

    // include (including character)
    // recursive call
    output.push_back(str[index]); // include character before calling
    subSequenceOfString(str, output, index + 1, subSequences);
}
int main()
{

    vector<string> subSequences;
    string str = "abc";
    string output = "";
    int index = 0;

    subSequenceOfString(str, output, index, subSequences);

    cout << "Print all subSequences of : " << str << endl;

    for (string subSequence : subSequences)
    {
        cout << "-> " << subSequence << endl;
    }
    return 0;
}
/**
 INCLUDE/EXCLUDE PATTERN (IMPORTANT CONCEPT) OF RECURSION

subSequenceOfString (very important question)

 **/