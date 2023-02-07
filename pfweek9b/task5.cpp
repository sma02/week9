#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    float mulFactor;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
    }
    cout << "Enter multiplying factor: ";
    cin >> mulFactor;
    for (int i = n-1; i >= 0; i--)
    {
        cout << mulFactor * numbers[i] << endl;
    }
}