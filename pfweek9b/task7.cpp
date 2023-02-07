#include <iostream>
using namespace std;

int main()
{
    int n;
    int largest=0;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
     if(numbers[i]>largest)
     {
        largest=numbers[i];
     }
    }
    cout<<"Largest in array is: "<<largest;
}