//Calculating "Weight Loss" via time taken in days 

#include <iostream>
using namespace std;
int main()
{
     float Days,KG;
     cout << "Enter the amount of weight(kgs) that you wanna lose: ";
     cin >> KG;
     Days = 15 * KG;
     cout << "It will take you " << Days << " Days to loose " << KG << " Kgs.";
}