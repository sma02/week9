#include <iostream>
using namespace std;

int main()
{
string sentence;
cout<<"Enter the sentence: ";
getline(cin,sentence);
for(int i=0;i<sentence.length();i++)
{
    if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
    continue;
    cout<<sentence[i];
}
cout<<endl;
}