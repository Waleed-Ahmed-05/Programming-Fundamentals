// Calculating Harvest cost for Gardner's Vegetables and Fruits 

#include <iostream>
using namespace std;
int main()
{
     float Total,PriceofVegetables,PriceofFruits;
     int VegetablesInKgs,FruitsInKgs;
     cout << "Enter price of vegetables per kilograms: ";
     cin >> PriceofVegetables;
     cout << "Enter price of fruits per kilograms: ";
     cin >> PriceofFruits;
     cout << "Enter No of Kgs for vegetable you want to purchase: ";
     cin >> VegetablesInKgs;
     cout << "Enter No of Kgs for fruits you want to purchase: ";
     cin >> FruitsInKgs;
     Total = (PriceofVegetables * VegetablesInKgs) + (PriceofFruits * FruitsInKgs);
     Total = Total / 1.94;
     cout << "Your total is " << Total << ".";
}