#include <iostream>
using namespace std;

int main()
{
    string word;
    int i = 0;
    cout << "Enter the word: ";
    getline(cin, word);
    for(int n=word.length()-1;n>=0;n--)
    {
        cout<<word[n];
    }
}