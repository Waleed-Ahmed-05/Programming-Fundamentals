//Calculating "Acceleration" via Time and Velocities 

#include <iostream>
using namespace std;
int main()
{
     float A,T,IV,FV;
     cout << "Enter Initial velocity of the object: ";
     cin >> IV;
     cout << "Enter Acceleration of the object: ";
     cin >> A;
     cout << "Enter Time required by the object: ";
     cin >> T;
     FV = A*T +IV;
     cout << "Final velocity gained by the object is " << FV << "." << endl;
}