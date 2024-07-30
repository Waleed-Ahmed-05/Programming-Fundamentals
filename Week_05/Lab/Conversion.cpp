// Write a program that converts a number in the range of [1 ... 99] into text (in English).

#include <iostream>
using namespace std;

void Conversion_01(int);
void Conversion_02(int);

int main()
{
    int Number;
    cout << "Enter any number except 11 - 19: ";
    cin >> Number;
    Conversion_01(Number);
    Conversion_02(Number);
}

void Conversion_01(int Number)
{
    if((Number / 10) == 1)
    {
        cout << "Ten";
    }
    else if((Number / 10) == 2)
    {
        cout << "Twenty-";
    }
    else if((Number / 10) == 3)
    {
        cout << "Thirty-";
    }
    else if((Number / 10) == 4)
    {
        cout << "Forty-";
    }
    else if((Number / 10) == 5)
    {
        cout << "Fifty-";
    }
    else if((Number / 10) == 6)
    {
        cout << "Sixty-";
    }
    else if((Number / 10) == 7)
    {
        cout << "Seventy-";
    }
    else if((Number / 10) == 8)
    {
        cout << "Eighty-";
    }
    else if((Number / 10) == 9)
    {
        cout << "Ninety-";
    }
}
void Conversion_02(int Number)
{
    if((Number % 10) == 1)
    {
        cout << "One";
    }
    else if((Number % 10) == 2)
    {
        cout << "Two";
    }
    else if((Number % 10) == 3)
    {
        cout << "Three";
    }
    else if((Number % 10) == 4)
    {
        cout << "Four";
    }
    else if((Number % 10) == 5)
    {
        cout << "Five";
    }
    else if((Number % 10) == 6)
    {
        cout << "Six";
    }
    else if((Number % 10) == 7)
    {
        cout << "Seven";
    }
    else if((Number % 10) == 8)
    {
        cout << "Eight";
    }
    else if((Number % 10) == 9)
    {
        cout << "Nine";
    }
}