#include <iostream>
using namespace std;

int main()
{
    int n, transformations;
    cout << "Enter the numbers of value you want to enter: ";
    cin >> n;
    cout << "Enter the numbers of transformations: ";
    cin >> transformations;
    int arr[n];
    for (int i = 0; i < n; i++)
        {
           cout<<"Enter number: ";
           cin>>arr[i];
        }
    for (int j = 0; j < transformations; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
            {
                arr[i] += 2;
            }
            else
            {
                arr[i] -= 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
           cout<<arr[i]<<" ";
        }
}