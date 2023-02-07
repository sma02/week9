#include <iostream>
using namespace std;

bool isOddEven(string sentence)
{
    if(sentence.length()%2)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
string sentence;
cout<<"Enter the string: ";
cin>>sentence;
if(isOddEven(sentence))
{
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
}