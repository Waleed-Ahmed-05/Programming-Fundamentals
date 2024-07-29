// Write a function that takes a number from the user and returns it after multiplying it with 5.

#include <iostream>
using namespace std;

float Product(float);

int main()
{
    float Number;
    cout << "Enter any number: ";
    cin >> Number;
    Number = Product(Number);
    cout << "Your number after being multiplied by 5 is " << Number << ".";
}

float Product(float Number)
{
    Number = Number * 5;
    return Number;
}