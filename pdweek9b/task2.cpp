#include <iostream>
using namespace std;

int main()
{
   string movies[5] =  {"Gladiator", "StarWars", "Terminator","TakingLives", "TombRider"};
   string movieName;
   int discount;
   cout<<"Enter movie name: ";
   cin>>movieName;
   for(int i=0;i<5;i++)
   {
    if(movieName==movies[i])
    {
        if(i%2)
        {
            discount=5;
        }
        else
        {
            discount=10;
        }
        cout<<"Total price: "<<500*(100-discount)/100;
        return 0;
    }
   }
}