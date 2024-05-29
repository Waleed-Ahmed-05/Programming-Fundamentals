// Finding Area of a Rectangle via Length and Width given by the User 

#include <iostream>
using namespace std;
int main()
{
     float Length,Width,Area;
     cout << "Enter length of rectangle: ";
     cin >> Length;
     cout << "Enter width of rectangle: ";
     cin >> Width;
     Area = Length * Width;
     cout << "Area of Rectangle is: " << Area;
}