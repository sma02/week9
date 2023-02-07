#include <iostream>
using namespace std;

int main()
{
string something="something ";
string sentence;
cout<<"Enter the sentence: ";
getline(cin,sentence);
cout<<something+sentence<<endl;
}