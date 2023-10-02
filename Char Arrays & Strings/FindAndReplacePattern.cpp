#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<string> vector)
{
    for (string str : vector)
    {
        cout << str << " ";
    }
    cout << endl;
}

void createAndUpdateMapping(string &input)
{

    char start = 'a';
    char mapping[300] = {0};

    // creating mapping
    for (char ch : input)
    {
        mapping[ch] = start++;
    }

    // updating the string
    for (int index = 0; index < input.length(); index++)
    {
        char ch = input[index];     // get char from string
        input[index] = mapping[ch]; // update string from mapping
    }
}
vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> answer;

    createAndUpdateMapping(pattern); // create and update mapping for pattern

    for (string word : words)
    {
        string temp = word;
        createAndUpdateMapping(temp); // create and update mapping for words
        // check if pattern and updated word is same or not if same then add to answer
        if (temp == pattern)
        {
            answer.push_back(word);
        }
    }
    return answer;
}

int main()
{

    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";

    cout << "CASE I :" << endl;
    cout << "After replacing words with pattern : ";
    printVector(findAndReplacePattern(words, pattern));

    vector<string> words2 = {"a", "b", "c"};
    string pattern2 = "a";

    cout << "CASE II :" << endl;
    cout << "After replacing words with pattern : ";
    printVector(findAndReplacePattern(words2, pattern2));

    cout << "Time Complexity : O(n)" << endl;
    cout << "Space Complexity : O(1)" << endl;
}