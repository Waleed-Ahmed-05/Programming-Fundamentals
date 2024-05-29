// Adding 4-digit numbers using Module operator 

#include <iostream>
using namespace std;
int main()
{
     int Sum,Number,Digit;
     Sum = 0;
     cout << "Enter a 4-digit number: ";
     cin >> Number;
     Digit = Number % 10;
     Sum = Sum + Digit;
     Digit = Number / 10;
     Digit = Digit % 10;
     Sum = Sum + Digit;
     Digit = Number / 100;
     Digit = Digit % 10;
     Sum = Sum + Digit;
     Digit = Number / 1000;
     Digit = Digit % 10;
     Sum = Sum + Digit;
     cout << "Sum: " << Sum;
}