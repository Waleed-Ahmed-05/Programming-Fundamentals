//Create a function that changes true to false and false to true. Your function should take input as a string and print false if the input is true. Or it should print true if the input is false.

#include <iostream>
using namespace std;

void Convert(string Entry);

int main()
{
    string Entry;
    cout << "Enter either True or False: ";
    cin >> Entry;
    Convert(Entry);
}

void Convert(string Entry)
{
    if(Entry == "True" || Entry == "true" || Entry == "T" || Entry == "t")
    {
        cout << "False";
    }
    else if(Entry == "False" || Entry == "false" || Entry == "F" || Entry == "f")
    {
        cout << "True";
    }
}