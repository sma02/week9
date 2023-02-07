#include <iostream>
using namespace std;

int main()
{
    string word;
    cout<<"enter the word: ";
    getline(cin,word);
    if(word.length()%2)
    {
        cout<<"odd";
    }
    else
    {
        cout<<"even";
    }
    cout<<endl;
}