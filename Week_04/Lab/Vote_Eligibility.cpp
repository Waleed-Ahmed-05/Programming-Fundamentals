// Creating a function to check whether a person is eligible to vote or not

#include <iostream>
using namespace std;

void Eligible(int Age)
{
    if(Age >= 18)
    {
        cout << endl << "You are eligible to vote.";
    }
    else 
    {
        cout << endl << "You are not eligible to vote.";
    }
}

int main()
{
    int Age;
    cout << "Enter you age: ";
    cin >> Age;
    Eligible(Age);
}