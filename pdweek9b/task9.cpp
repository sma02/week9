#include <iostream>
using namespace std;

string pinCode(string pin)
{
string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"}; 
string output="";
int value;
for(int i=0;i<4;i++)
{
    pin[i]-='0';
    value=pin[i]+i;
    while(value>9)
    {
        value-=10;
    }
    output+=MOVES[value];
    output+=" ";
}
return output;
}

int main()
{
    string pin;
    int count=0;
    cout<<"Enter the pin code[must be a 4 digit number]: ";
    cin>>pin;
    for(int i=0;i<pin.length();i++)
    {
        if(pin[i]>='0'&&pin[i]<='9')
        {
            continue;
        }
        count++;
    }
    if(count!=0||pin.length()!=4)
    {
        cout<<"Invalid input!"<<endl;
        return 0;
    }
    cout<<"Output: "<<pinCode(pin)<<endl;
}