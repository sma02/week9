#include <iostream>
using namespace std;

int  main()
{
    int n;
    cout<<"Enter the number of values you want to enter: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
        for(int i=0;i<n;i++)
    {
        if(arr[i]%10==7)
        {
            cout<<"Boom!"<<endl;
            return 0;
        }
    }
    cout<<"There is no 7 in the array"<<endl;

}