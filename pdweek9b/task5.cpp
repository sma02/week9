#include <iostream>
using namespace std;

int main()
{
    string arr[4];
    string check;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter string: ";
        getline(cin,arr[i]);
    }
    check=arr[0];
   for(int i=1;i<4;i++)
    {
        if(check!=arr[i])
        {
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
}