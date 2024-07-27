// Write a program using functions and if statements that repeatedly acts like a calculator and never stops unless we forcefully close the window.

#include <iostream>
using namespace std;

void Add(float Number_01, float Number_02)
{
    float Result = Number_01 + Number_02;
    cout << endl << "Addition of " << Number_01 << " and " << Number_02 << " is " << Result << "." << endl;
}
void Subtract(float Number_01, float Number_02)
{
    float Result = Number_01 - Number_02;
    cout << endl << "Subtraction of " << Number_01 << " and " << Number_02 << " is " << Result << "." << endl;
}
void Division(float Number_01, float Number_02)
{
    float Result = Number_01 / Number_02;
    cout << endl << "Division of " << Number_01 << " and " << Number_02 << " is " << Result << "." << endl;
}
void Multiplication(float Number_01, float Number_02)
{
    float Result = Number_01 * Number_02;
    cout << endl << "Multiplication of " << Number_01 << " and " << Number_02 << " is " << Result << "." << endl;
}

int main()
{
    while(true)
    {
        float Number_01,Number_02;
        char Choice;
        cout << endl << "Enter 1st number: ";
        cin >> Number_01;
        cout << "Enter 2nd number: ";
        cin >> Number_02;
        cout << "Enter you choice(+,-,/,*): ";
        cin >> Choice;
        if(Choice == '+')
        {
            Add(Number_01, Number_02);
        }
        else if(Choice == '-')
        {
            Subtract(Number_01, Number_02);
        }
        else if(Choice == '/')
        {
            Division(Number_01, Number_02);
        }
        else if(Choice == '*')
        {
            Multiplication(Number_01, Number_02);
        }
    }
}