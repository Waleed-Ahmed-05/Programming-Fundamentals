// Write a program that takes the number of red roses, white roses, tulips as input from the user, then calculates the total price of the flowers. If the price is greater than 200$, it gives a 20% discount on the total price and prints the original price and the total payable amount after the discount on the screen.

#include <iostream>
using namespace std;

float Total(int, int, int);
float Discount(float);

int main()
{
    int Red,White,Tulip;
    cout << "Enter quantity of Red Roses: ";
    cin >> Red;
    cout << "Enter quantity of White Roses: ";
    cin >> White;
    cout << "Enter quantity of Tulips: ";
    cin >> Tulip;
    float Price = Total(Red, White, Tulip);
    float Discount_Price = Discount(Price);
    cout << "You total amount " << Price << "$ after discount is " << Discount_Price << "$.";
}

float Total(int R, int W, int T)
{
    float Result = (R * 2) + (W * 4.10) + (T * 2.50);
    return Result; 
}
float Discount(float Price)
{
    float Discount_Price = 0;
    if(Price >= 200)
    {
        Discount_Price = Price * 20 / 100;
        Discount_Price = Price - Discount_Price;
    }
    else 
    {
        Discount_Price = Price;
    }
    return Discount_Price;
}