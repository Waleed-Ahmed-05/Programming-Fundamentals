// Create a function that takes the length, width, height (in meters) and output unit in which you want to see the answer and returns the volume of a pyramid in the correct unit.

#include <iostream>
using namespace std;

float Volume = 0;

float Calculate(int, int, int, string);

int main()
{
    int Length, Width, Height;
    string Unit, Result;
    cout << "Enter length of the pyramid: ";
    cin >> Length;
    cout << "Enter width of the pyramid: ";
    cin >> Width;
    cout << "Enter height of the pyramid: ";
    cin >> Height;
    cout << "Enter unit for conversion(m,mm,cm,km): ";
    cin >> Unit;
    cout << "Volume of pyramid is " << Calculate(Length, Width, Height, Unit) << " cubic " << Unit;
}

float Calculate(int L, int W,int H, string U)
{
    float Volume = L * W * H;
    if(U ==  "cm")
    {
        Volume = Volume * 1000000 / 3;
    }
    else if(U == "km")
    {
        Volume = (Volume / 1000000000 )/ 3;
    }
    else if(U == "mm")
    {
        Volume = Volume * 1000000000 / 3;
    }
    return Volume;
}