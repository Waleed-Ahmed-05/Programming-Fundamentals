// Creating a function to check whether a person has passed or failed

#include <iostream>
using namespace std;

void Pass(int Marks)
{
    if(Marks > 50)
    {
        cout << endl << "You have passed.";
    }
    else 
    {
        cout << endl << "You have failed.";
    }
}

int main()
{
    int Marks;
    cout << "Enter you Marks: ";
    cin >> Marks;
    Pass(Marks);
}