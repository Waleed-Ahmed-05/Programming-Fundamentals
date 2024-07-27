// Displaying you name in a loop only if "Irzam" is entered using a function

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
    while(true)
    {
        string Name;
        cout << "Enter your name: ";
        cin >> Name;
        if(Name == "Irzam" || Name == "irzam")
        {
            Loop(Name);
        }
    }
}