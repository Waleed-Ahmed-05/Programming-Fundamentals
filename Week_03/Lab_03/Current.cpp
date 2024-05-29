// Finding Current(I) via Charge(Q) and Time(T) given by the User 

#include <iostream>
using namespace std;
int main()
{
     float Current,Charge,Time;
     cout << "Enter number of charges: ";
     cin >> Charge;
     cout << "Enter time at which charges flow: ";
     cin >> Time;
     Current = Charge / Time;
     cout << "The amount of current due to the flow of charges is: " << Current;
}