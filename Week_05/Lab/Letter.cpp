// Make a function that takes 1 Character as input, does processing according to the input and then returns the string.String is “You have entered Capital A” if the user enters ‘A’, otherwise “You have entered small A”.

#include <iostream>
using namespace std;

string Letter(char);

int main()
{
    char Alphabet;
    cout << "Enter either A or a: ";
    cin >> Alphabet;
    cout << Letter(Alphabet);
}

string Letter(char Alphabet)
{
    if(Alphabet == 'a')
    {
        return "You have entered small A.";
    }
    else if(Alphabet == 'A')
    {
        return "You have entered capital A.";
    }
}