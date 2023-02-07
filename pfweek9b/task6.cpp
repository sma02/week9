#include <iostream>
using namespace std;

int main()
{
    int n;
    int smallest;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
    }
    smallest=numbers[0];
    for (int i = 1; i < n; i++)
    {
     if(numbers[i]<smallest)
     {
        smallest=numbers[i];
     }
    }
    cout<<"Smallest in array is: "<<smallest;
}