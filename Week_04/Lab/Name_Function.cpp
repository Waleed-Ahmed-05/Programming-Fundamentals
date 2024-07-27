// Displaying you name in a loop using a function

#include <iostream>
using namespace std;

void Loop(string Name)
{
    while(true)
    {
        cout << Name << endl;
    }
}

int main()
{
    string Name;
    cout << "Enter your name: ";
    cin >> Name;
    Loop(Name);
}