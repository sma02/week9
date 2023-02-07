#include <iostream>
using namespace std;

int main()
{
    string word;
    char charToFind;
    bool flag = false;
    cout << "enter the word: ";
    getline(cin, word);
    cout << "Enter the character to find:";
    cin >> charToFind;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == charToFind)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "char:" << charToFind << " found in string:" << word;
    }
    else
    {
        cout << "character not found in string!";
    }
}