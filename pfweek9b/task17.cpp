#include <iostream>
using namespace std;

int main()
{
    int coins[4];
    float totalDue;
    float totalChange=0;
    cout<<"Enter total due amount: ";
    cin>>totalDue;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the number of coins: ";
        cin>>coins[i];
    }
    totalChange=(coins[0]*25+coins[1]*10+coins[2]*5+coins[3])/100;
    if((totalChange-totalDue)>=0)
    {
        cout<<"Yes!you have enough amount to pay"<<endl;
    }
    else{
        cout<<"No!you don't have enough amount to pay"<<endl;
    }
}