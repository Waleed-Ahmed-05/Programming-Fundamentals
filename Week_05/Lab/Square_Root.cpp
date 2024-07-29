// Write a c++ program that takes a number from the user as input and print its square root on the screen using pre-defined functions.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Number_01;
    cout << "Enter number: ";
    cin >> Number_01;
    cout << "Square root of " << Number_01 << " is " << sqrt(Number_01) << ".";
}