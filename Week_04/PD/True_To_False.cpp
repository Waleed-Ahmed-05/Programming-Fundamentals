// Create a function that takes two integers and checks if they are equal or not. If they are equal then you should print on the Console “true” otherwise you should print “false” on the console.

#include <iostream>
using namespace std;

bool Equal(int, int);

int main()
{
    int Number_01,Number_02;
    cout << "Enter 1st number: ";
    cin >> Number_01;
    cout << "Enter 2nd number: ";
    cin >> Number_02;
    if(Equal(Number_01, Number_02))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

}

bool Equal(int Number_01, int Number_02)
{
    if(Number_01 == Number_02)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}