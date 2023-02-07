#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    float sum = 0, average = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    average = sum / n;
    cout << "Sum:" << sum << endl;
    cout << "Average:" << average << endl;
}