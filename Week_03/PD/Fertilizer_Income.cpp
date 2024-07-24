//Calculating "Fertilizer's Price" via cost,size and area covered by a bag of any specific pounds 

#include <iostream>
using namespace std;
int main()
{
     float Size,CostofBag,Area,CostPerPound,CostPerArea;
     cout << "Enter bag size in pounds: ";
     cin >> Size;
     cout << "Enter cost of the bag: ";
     cin >> CostofBag;
     cout << "Enter area covered by each bag in square feet: ";
     cin >> Area;
     cout << "_________________________________________________________" << endl;
     CostPerPound = CostofBag / Size;
     CostPerArea = Size * Area;
     cout << "Cost of fertilizer per pound: " << CostPerPound << endl;
     cout << "Cost of fertilizing the area per square feet: " << CostPerArea;
}