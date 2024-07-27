// Checking if a number entered by the user is Even or Odd

#include <iostream>
using namespace std;

void Checker(int Number)
{
    if(Number % 2 == 0)
    {
        cout << endl << Number << " is even.";
    }
    else 
    {
        cout << endl << Number << " is odd.";
    }
}

int main()
{
    int Number;
    cout << "Enter any number: ";
    cin >> Number;
    Checker(Number);
}