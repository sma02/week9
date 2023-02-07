#include <iostream>
using namespace std;

int main()
{
    int n;
    int numberToFind;
    cout << "Enter a amount of numbers: ";
    cin >> n;
    float numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> numbers[i];
    }
    cout << "Enter number to find: ";
    cin >> numberToFind;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == numberToFind)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "The number " << numberToFind << " has been found in array";
    }
    else
    {
        cout << "number not found!";
    }
}