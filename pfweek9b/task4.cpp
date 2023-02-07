#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << numbers[i]<<endl;
    }
}
