// Calculating "Ticket Distribution Prices" via price and amount of tickets sold among children and adults including donation percentages 

#include <iostream>
using namespace std;
int main()
{
     string Name;
     float AdultPrice,ChildPrice,NoofAdults,NoofChilds,Percentage,Total,Donation;
     cout << "Enter movie name: ";
     cin >> Name;
     cout << "Enter adult ticket price: ";
     cin >> AdultPrice;
     cout << "Enter child ticket price: ";
     cin >> ChildPrice;
     cout << "Enter No of adult ticket sold: ";
     cin >> NoofAdults;
     cout << "Enter No of child ticket sold: ";
     cin >> NoofChilds;
     cout << "Enter donation percentage: ";
     cin >> Percentage;
     cout << "____________________________________" << endl;
     Total = (AdultPrice * NoofAdults) + (ChildPrice * NoofChilds);
     cout << "Total amount generated: " << Total << endl;
     Donation = (Total / 100) * 10;
     Total = Total - Donation;
     cout << "Amount after donation: " << Total;
}