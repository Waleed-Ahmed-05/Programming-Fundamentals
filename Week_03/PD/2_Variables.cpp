// Taking 5 integers and calculating their sum using only 2 variables  

#include <iostream>
using namespace std;
int main()
{
     float Sum,Number;
     Sum = 0;
     cout << "Enter 1st number: ";
     cin >> Number;
     Sum = Sum + Number;
     cout << "Enter 2nd number: ";
     cin >> Number;
     Sum = Sum + Number;
     cout << "Enter 3rd number: ";
     cin >> Number;
     Sum = Sum + Number;
     cout << "Enter 4th number: ";
     cin >> Number;
     Sum = Sum + Number;
     cout << "Enter 5th number: ";
     cin >> Number;
     Sum = Sum + Number;
     cout << "Total sum: " << Sum;
}