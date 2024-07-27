// Creating a function to print greater number on the screen

#include <iostream>
using namespace std;

void Greater(float Number_01, float Number_02)
{
    if(Number_01 > Number_02)
    {
        cout << Number_01 << " is greater than " << Number_02;
    }
    else
    {
        cout << Number_02 << " is greater than " << Number_01;
    }
}

int main()
{
    float Number_01,Number_02;
    char Choice;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    Greater(Number_01, Number_02);
}