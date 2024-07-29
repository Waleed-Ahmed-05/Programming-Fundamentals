// Create a function that takes a number as an argument and returns true or false depending on whether the number is symmetrical or not. A number is symmetrical when it is the same as its reverse.

#include <iostream>
using namespace std;

bool Symmetrical(int);

int main()
{
    int Number;
    cout << "Enter any 3 digit number: ";
    cin >> Number;
    if(Symmetrical(Number))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

bool Symmetrical(int Number)
{
    int Number_01 = Number, Number_02;
    string Reverse_01 = to_string(Number), Reverse_02;
    while(Number_01 > 0)
    {
        Number_02 = Number_01 % 10;
        Number_01 = Number_01 / 10;
        Reverse_02 += to_string(Number_02);
    }
    if(Reverse_01 == Reverse_02)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}