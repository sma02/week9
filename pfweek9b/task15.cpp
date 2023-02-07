#include <iostream>
using namespace std;

int main()
{
    int n;
   cout<<"Enter number of resistances: ";
   cin>>n;
   float resistances[n];
   float resultantResistance=0;
   for(int i=0;i<n;i++)
   {
    cout<<"Enter the value resistance "<<i+1<<": ";
    cin>>resistances[i];
   }
      for(int i=0;i<n;i++)
   {
    resultantResistance+=resistances[i];
   }
   cout<<"total resistance: "<<resultantResistance<<endl;
}