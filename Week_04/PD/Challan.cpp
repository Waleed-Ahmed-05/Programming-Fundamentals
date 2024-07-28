// Write a challan issuing program to tell if the car was speeding or not. If the speed is greater than 100 km/h then the car will be challenged, otherwise, the car is following the speed limit.

#include <iostream>
using namespace std;

bool Challan(float );

int main()
{
    float Speed;
    cout << "Enter speed of the car: ";
    cin >> Speed;
    if(Challan(Speed))
    {
        cout << "Halt.....YOU WILL BE CHALLENGED!!!";
    }
    else
    {
        cout << "Perfect! You're going good.";
    }
}

bool Challan(float Speed)
{
    if(Speed > 100)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}