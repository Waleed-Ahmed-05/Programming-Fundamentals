// Write a program that takes two numbers as input from the user and prints the minimum out of two on the screen using pre-defined functions.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Number_01, Number_02;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    cout << "Minimum number is " << min(Number_01,Number_02) << ".";
}