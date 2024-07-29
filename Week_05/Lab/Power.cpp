// Write a c++ program that takes two numbers from the user and takes the power of the first number as the second number entered by the user using pre-defined functions.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Number_01, Number_02;
    cout << "Enter number: ";
    cin >> Number_01;
    cout << "Enter power: ";
    cin >> Number_02;
    cout << "(" << Number_01 << " ^ " << Number_02 << ") is " << pow(Number_01,Number_02) << ".";
}