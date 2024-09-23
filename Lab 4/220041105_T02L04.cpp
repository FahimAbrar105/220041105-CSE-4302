#include<iostream>
#include<string>

using namespace std;

class Flight{
private:
    int number;
    string destination;
    float distance;
    float fuel;

    int CalFuel(int distance)
    {
        if(distance<=1000)
            return 500;
        if(distance>1000 && distance <=2000)
            return 1100;
        if(distance>2000)
            return 2200;
    }
public:
    int FeedInfo()
    {
       cout<<"Enter number"<<endl;
       cin>>number;
       cout<<"Enter destination"<<endl;
       cin>>destination;
       cin.ignore();
       cout<<"Enter distance"<<endl;
       cin>>distance;
       cout<<"Enter fuel"<<endl;
       cin>>fuel;
    }
    void ShowInfo()
    {
        cout<<"Number "<<number<<endl;
        cout<<"Destination "<<destination<<endl;
        cout<<"Distance "<<distance<<endl;
        cout<<"Present Fuel :"<<fuel<<endl;

        float temp=CalFuel(distance);

        cout<<"Required Fuel "<<temp<<endl;

        if(fuel>=temp)
            cout<<"Can fly"<<endl;
        else
            cout<<"Cannot fly"<<endl;
    }
};

int main()
{
    Flight a;
    a.FeedInfo();
    a.ShowInfo();
}
