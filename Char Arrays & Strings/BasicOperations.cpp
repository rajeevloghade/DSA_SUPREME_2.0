#include <iostream>
using namespace std;

int getLength(char ch[], int size)
{
    int length = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void getReverse(char ch[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(ch[start++], ch[end--]);
    }
}

void getUpperCase(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currentChar = ch[index];
        if (currentChar >= 'a' && currentChar <= 'z')
        {
            ch[index] = currentChar - 'a' + 'A';
        }
        index++;
    }
}
void getLowerCase(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currentChar = ch[index];
        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            ch[index] = currentChar - 'A' + 'a';
        }
        index++;
    }
}

void replace(char ch[], char replace, char replaceWith)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == replace)
        {
            ch[index] = replaceWith;
        }
        index++;
    }
}

bool isPellindrome(char ch[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (ch[start] == ch[end])
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

int main()
{
    char ch[100];

    // cin >> ch;
    cout << "Enter ch array : ";
    cin.getline(ch, 100);
    int length = getLength(ch, 100);
    cout << endl;
    cout << "Printing ch array : " << ch << endl
         << endl;
    cout << "Size ch array : " << length << endl
         << endl;
    getUpperCase(ch);
    cout << "Printing Uppercase of ch array : " << ch << endl
         << endl;
    getLowerCase(ch);
    cout << "Printing Lowercase of ch array : " << ch << endl
         << endl;
    replace(ch, '@', 'a');
    cout << "Printing replaced of ch array : " << ch << endl
         << endl;
    if (isPellindrome(ch, length))
    {
        cout << "Char array is pellindrome" << endl
             << endl;
    }
    else
    {
        cout << "Char array is NOT pellindrome" << endl
             << endl;
    }
    getReverse(ch, length);
    cout << "Printing reverse of ch array : " << ch << endl
         << endl;

    string name;
    cout << "Enter String : ";
    // cin >> name;
    getline(cin, name);
    string temp = "";

    cout << endl;
    cout << "Printing String : " << name << endl
         << endl;
    cout << "Length of String : " << name.length() << endl
         << endl; // length function
    cout << "Size of String : " << name.size() << endl
         << endl; // size function
    cout << "Empty of String : " << temp.empty() << endl
         << endl; // empty
                  // function

    cout << "Front ele of String : " << name.front() << endl
         << endl; // front function
    cout << "Back ele of String : " << name.back() << endl
         << endl; // back function

    cout << "Element At 3 of String : " << name.at(3) << endl
         << endl; // at function

    string firstName;
    string lastName;
    cout << "Enter firstName : ";
    cin >> firstName;
    cout << "Enter lastName : ";
    cin >> lastName;

    cout << "Before appending lastName to firstName : " << firstName << endl
         << endl;

    firstName.append(" ");
    firstName.append(lastName); // append function

    cout << "After appending lastName to firstName : " << firstName << endl
         << endl;

    string myString = "RajeevLoghade";
    myString.pop_back(); // pop_back function
    cout << "After pop : " << myString << endl
         << endl;
    myString.push_back('e'); // push_back function
    cout << "After push : " << myString << endl
         << endl;

    string myString2 = "This is is a car";
    cout << "Before erase : " << myString2 << endl
         << endl;
    myString2.erase(7, 3); // erase function
    cout << "After erase : " << myString2 << endl
         << endl;

    string myString3 = "This a car";
    cout << "Before insert : " << myString3 << endl
         << endl;
    myString3.insert(5, "is "); // insert function
    cout << "After insert : " << myString3 << endl
         << endl;

    string myString4 = "This is a car";
    string find = "is";
    if (myString4.find(find) != string::npos) // find function
    {
        cout << "Found" << endl
             << endl;
    }
    else
    {
        cout << "Not Found" << endl
             << endl;
    }

    string myString5 = "Rajeev";
    string myString6 = "Rajeev";
    if (myString5.compare(myString6) == 0) // compare function
    {
        cout << "compared and Matching" << endl
             << endl;
    }
    else
    {
        cout << "compared and Not Matching" << endl
             << endl;
    }

    string myString7 = "This is a Rajeev Loghade";
    cout << "Substring :" << myString7.substr(10, 6); // Substring function
}