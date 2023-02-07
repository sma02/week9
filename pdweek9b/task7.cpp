#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string s1;
    string s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j]&&s1[i]!='\0')
            {
                s1[i] = '\0';
                s2[j] = '\0';
                count++;
            }
        }
    }

    cout << "count of common characters: " << count;
}