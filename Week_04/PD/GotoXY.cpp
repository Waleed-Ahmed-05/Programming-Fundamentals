// Write a program that prints the test initially and then moves the cursor position to the given XY location on the screen.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}

int main()
{
    system("cls");
    GotoXY(5, 5);
    cout << "My name is Waleed Ahmed";
}