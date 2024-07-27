// Adding 2 numbers by defining (+,-,/,*) operators

#include <iostream>
using namespace std;

void Add(float Number_01, float Number_02)
{
    float Result = Number_01 + Number_02;
    cout << endl << "Addition of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}
void Subtract(float Number_01, float Number_02)
{
    float Result = Number_01 - Number_02;
    cout << endl << "Subtraction of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}
void Division(float Number_01, float Number_02)
{
    float Result = Number_01 / Number_02;
    cout << endl << "Division of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}
void Multiplication(float Number_01, float Number_02)
{
    float Result = Number_01 * Number_02;
    cout << endl << "Multiplication of " << Number_01 << " and " << Number_02 << " is " << Result << ".";
}

int main()
{
    float Number_01,Number_02;
    char Choice;
    cout << "Enter 1st number: ";
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