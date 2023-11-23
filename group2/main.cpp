#include<iostream>
using namespace std;
int main()
{   char ch1 , ch2;
    int purchase, Rpoints;
    int Lpoints = 0;
    const float conversion = 10.0;
    do{
    cout << "Enter Your purchase amount: ";
    cin >> purchase;
    Lpoints += purchase / conversion;
    cout << "\nYour loyalty points are: "<<Lpoints<<endl;
    cout << "Do you want to redeem your loyalty points? (y/Y): ";
    cin >> ch1;


    if(ch1 == 'y' || ch1 == 'Y')
    {
        cout <<"\nEnter the amount of points you want to redeem: ";
        cin >> Rpoints;
        if(Rpoints <= Lpoints)
    {

        {
        int discount = Rpoints * 0.5;
        cout << "\nDiscount = "<< discount << endl;
        Lpoints -= Rpoints;
        cout << "remaining Loyalty points: " << Lpoints <<endl;
        }
    }
     else
    {cout <<"\n Invalid number of points"<<endl;}

    }


    cout << "Do you want to try again? (Y/y): ";
    cin >> ch2;
    cout << endl;
    }while(ch2 == 'y' || ch2 == 'Y');


    cout <<"\nHappy shopping!"<<endl;



}

