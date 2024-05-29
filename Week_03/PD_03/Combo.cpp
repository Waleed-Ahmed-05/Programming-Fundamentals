// Taking 15 numbers and calculating the sum of (Addition of 5 numbers,Multliplication of next 5 numbers) and then subtracting last 5 numbers from it

#include <iostream>
using namespace std;
int main()
{
     float Total,Sum,Multliplication,Subtraction,Number01,Number02,Number03,Number04,Number05,Number06,Number07,Number08,Number09,Number10,Number11,Number12,Number13,Number14,Number15;
     cout << "Enter 1st number: ";
     cin >> Number01;
     cout << "Enter 2nd number: ";
     cin >> Number02;
     cout << "Enter 3rd number: ";
     cin >> Number03;
     cout << "Enter 4th number: ";
     cin >> Number04;
     cout << "Enter 5th number: ";
     cin >> Number05;
     Sum = Number01 + Number02 + Number03 + Number04 + Number05;
     cout << "Enter 6th number: ";
     cin >> Number06;
     cout << "Enter 7th number: ";
     cin >> Number07;
     cout << "Enter 8th number: ";
     cin >> Number08;
     cout << "Enter 9th number: ";
     cin >> Number09;
     cout << "Enter 10th number: ";
     cin >> Number10;
     Multliplication = Number06 * Number07 * Number08 * Number09 * Number10;
     cout << "Enter 11th number: ";
     cin >> Number11;
     cout << "Enter 12th number: ";
     cin >> Number12;
     cout << "Enter 13th number: ";
     cin >> Number13;
     cout << "Enter 14th number: ";
     cin >> Number14;
     cout << "Enter 15th number: ";
     cin >> Number15;
     Subtraction = Number11- Number12 - Number13 - Number14 - Number15;
     Total = Sum + Multliplication - Subtraction;
     cout << "Total: " << Total;
}