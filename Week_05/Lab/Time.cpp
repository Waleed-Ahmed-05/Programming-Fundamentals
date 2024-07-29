// Write a program that inputs hours and minutes of a 24-hour day and calculates what will be the time after 15 minutes. Print the result in hh:mm format. Hours are always between 0 and 23, and minutes are always between 0 and 59. Hours are written with one or two digits.

#include <iostream>
using namespace std;

void Time(int, int);

int main()
{
    int Hours, Minutes;
    cout << "Enter current hour: ";
    cin >> Hours;
    cout << "Enter current minutes: ";
    cin >> Minutes;
    Time(Hours, Minutes);
}

void Time(int Hours, int Minutes)
{
    int H = Hours, M = Minutes + 15;
    if(M > 59)
    {
        H++;
        M = M - 60; 
    }
    if(H > 23)
    {
        H = 0;
    }
    cout << H << ":" << M;
}