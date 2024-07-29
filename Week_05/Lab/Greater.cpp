// Write a c++ program that takes two numbers from the user and prints the greater number on the screen using pre-defined function.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Number_01, Number_02;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    cout << "Greatest number is " << max(Number_01,Number_02) << ".";
}