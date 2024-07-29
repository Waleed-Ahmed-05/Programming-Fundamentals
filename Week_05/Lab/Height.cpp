// Write a C++ program to calculate the height of the tree? When the angle of elevation from a point 43 feet from the base of a tree on level ground to the top of the tree is 30° (30 degree).

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float Angle, Base, Height;
    cout << "Enter current angle: ";
    cin >> Angle;
    cout << "Enter current base: ";
    cin >> Base;
    Height = tan(Angle * (3.14 / 180)) * Base;
    cout << "Height of the tree with base " << Base << " and angle " << Angle << " is " << Height << ".";
}