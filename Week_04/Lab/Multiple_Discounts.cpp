// Write a program for a store that has announced to give a 10% discount on the total purchase amount of every Sunday and 5% on every other day.

#include <iostream>
using namespace std;

void Discount(float Price, string Day)
{
    float Total = Price;

    if(Day == "Sunday" || Day == "sunday")
    {
        Total = Price * 10 / 100;
        Total = Price - Total;
    }
    else
    {
        Total = Price * 5/100;
        Total = Price - Total;
    }

    cout << endl << "Your total amount after applying discount is " << Total << "." << endl << endl;
}

int main()
{
    while(true)
    {
        float Price;
        string Day;
        cout << "Enter total amount: ";
        cin >> Price;
        cout << "Enter current day: ";
        cin >> Day;
        Discount(Price, Day);
    }
}