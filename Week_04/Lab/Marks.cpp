// Creating a function to display marks entered by the user

#include <iostream>
using namespace std;

void Marks(int Marks)
{
    cout << endl << "You have got " << Marks << " marks.";
}

int main()
{
    int Mark;
    cout << "Enter you Marks: ";
    cin >> Mark;
    Marks(Mark);
}