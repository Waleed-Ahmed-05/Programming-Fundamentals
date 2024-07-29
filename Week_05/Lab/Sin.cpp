// Write a C++ Program to Find the sin of a Number using a pre-defined sin() function.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Number_01;
    cout << "Enter number: ";
    cin >> Number_01;
    cout << "sin(" << Number_01 << ") is " << sin(Number_01) << ".";
}