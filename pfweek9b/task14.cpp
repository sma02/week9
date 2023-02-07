#include <iostream>
using namespace std;

int main()
{
    string word;
    int numberOfVowels=0;
    cout<<"Enter a word:";
    cin>>word;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]=='z')
        {
            word[i]='a';
        }
        else  if(word[i]=='Z')
        {
            word[i]='A';
        }
        else
        {
            word[i]++;
        }
    }
    cout<<word;
}