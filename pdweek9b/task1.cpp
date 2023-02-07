#include <iostream>
using namespace std;

int  main()
{
    string fruit[] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    string fruitName;
    float quantity;
    cout<<"Enter the name of fruit: ";
    cin>>fruitName;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    for(int i=0;i<4;i++)
    {
        if(fruitName==fruit[i])
        {
            cout<<"Total price: "<<price[i]*quantity<<endl;
            return 0;
        }
    }
}