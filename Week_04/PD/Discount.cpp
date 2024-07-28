// Write a program for airline that gives discounts to specific countries.

#include <iostream>
using namespace std;

void Discount(string , int);

int main()
{
    while(true)
    {
        string Country;
        int Total;
        cout << "Enter the name of your country: ";
        cin >> Country;
        cout << "Enter ticket amount to apply discount: ";
        cin >> Total;
        Discount(Country, Total);
    }
}

void Discount(string Country, int Total)
{
    int Result = Total;
    if(Country == "Pakistan" || Country == "pakistan")
    {
        Total = Total * 5 /100;
        Result = Result - Total;
    }
    else if(Country == "Ireland" || Country == "ireland")
    {
        Total = Total * 10 /100;
        Result = Result - Total;
    }
    else if(Country == "India" || Country == "india")
    {
        Total = Total * 20 /100;
        Result = Result - Total;
    }
    else if(Country == "England" || Country == "england")
    {
        Total = Total * 30 /100;
        Result = Result - Total;
    }
    else if(Country == "Canada" || Country == "canada")
    {
        Total = Total * 45 /100;
        Result = Result - Total;
    }
    cout << "Your total price after discount is " << Result << "." << endl << endl;
}