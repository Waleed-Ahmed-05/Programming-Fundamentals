// Finding Aggregate via all the details given by the User 

#include <iostream>
using namespace std;
int main()
{
     string Name;
     float Matriculation,Intermediate,ECAT,Aggregate;
     cout << "Enter you name: ";
     cin >> Name;
     cout << "Enter matriculation marks: ";
     cin >> Matriculation;
     cout << "Enter Intermediate marks: ";
     cin >> Intermediate;
     cout << "Enter ECAT marks: ";
     cin >> ECAT;
     Matriculation = (Matriculation / 1100) * 10;
     Intermediate = (Intermediate / 550) * 40;
     ECAT = (ECAT / 400) * 50;
     Aggregate = Matriculation + Intermediate + ECAT;
     cout << Name << "'s aggregate is: " << Aggregate;
}