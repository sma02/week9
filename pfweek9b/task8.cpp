#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter the word: ";
    getline(cin,word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << "pos:" << i << " "
             << "char:" << word[i] << endl;
    }
}