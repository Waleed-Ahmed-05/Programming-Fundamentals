// Create a function that determines whether a number is Oddish or Evenish. A number is Oddish if the sum of all of its digits is odd, and a number is Evenish if the sum of all of its digits is even. If a number is Oddish, return "Oddish". Otherwise, return "Evenish".

#include <iostream>
using namespace std;

string EvenOrOdd(int);

int main()
{
    int Number;
    cout << "Enter any 5 digit number: ";
    cin >> Number;
    cout << EvenOrOdd(Number);
}

string EvenOrOdd(int Number)
{
    int Number_01, Result = 0;
    while(Number > 0)
    {
        Number_01 = Number % 10;
        Number = Number / 10;
        Result = Result + Number_01;
    }
    if((Result % 2) == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}