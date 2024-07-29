// Adding 2 numbers using function.

#include <iostream>
using namespace std;

void Add(int Number_01, int Number_02)
{
    int Result = Number_01 + Number_02;
    cout << endl << "Addition of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}

int main()
{
    int Number_01,Number_02;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    Add(Number_01, Number_02);
}