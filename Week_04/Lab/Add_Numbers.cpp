// Adding 2 numbers by taking input from the user

#include <iostream>
using namespace std;

int main()
{
    int Number_01,Number_02,Result;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    Result = Number_01 + Number_02;
    cout << endl << "Addition of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}