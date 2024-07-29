// Write a C++ program that calculates the value of x for the following equation 5x^2 + 6x + 1 = 0.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    x1 = ((-1 * b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    x2 = ((-1 * b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    cout << "x = " << x1 << " or x = " << x2;
}