#include  <iostream>
using namespace std;

int main()
{
    int n;
    int t=0;
    cout<<"Enter the number of sqaures to color: ";
    cin>>n;
    string arr[n];
    string currentPencilColor="";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of color on square: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(currentPencilColor!=arr[i]&&currentPencilColor!="")
        {
            t+=1;
        }
        t+=2;
        currentPencilColor=arr[i];
    }
    cout<<"Total time needed is: "<<t<<" sec"<<endl;
}