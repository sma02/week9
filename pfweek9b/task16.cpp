#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the size of second array:";
cin>>n;
int arr1[2];
int arr2[n];
int arr3[n+2];
for(int i=0;i<2;i++)
{
    cout<<"Enter a number: ";
    cin>>arr1[i];
}
for(int i=0;i<n;i++)
{
    cout<<"Enter a number: ";
    cin>>arr2[i];
}
arr3[0]=arr1[0];
arr3[n+2-1]=arr1[1];
for(int i=1;i<n;i++)
{
arr3[i]=arr2[i-1];
}
for(int i=0;i<n+2;i++)
{
    cout<<arr3[i]<<" ";
}
}