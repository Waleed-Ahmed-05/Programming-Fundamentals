// Write a program for a Store has announced to give a 10% discount on the total purchase amount every Sunday.

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

    cout << endl << "Your total amount after applying discount is " << Total << ".";
}

int main()
{
    float Price;
    string Day;
    cout << "Enter total amount: ";
    cin >> Price;
    cout << "Enter current day: ";
    cin >> Day;
    Discount(Price, Day);
}