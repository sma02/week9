#include <iostream>
using namespace std;

int main()
{
    string word;
    int numberOfVowels=0;
    cout<<"Enter a word:";
    getline(cin,word);
    for(int i=0;i<word.length();i++)
    {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        {
            numberOfVowels++;
        }
    }
    cout<<"number of vowels: "<<numberOfVowels<<endl;
}