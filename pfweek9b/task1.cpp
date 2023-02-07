#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    float cgpa[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter cgpa: ";
        cin >> cgpa[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout <<' ' << cgpa[i] ;
    }
}