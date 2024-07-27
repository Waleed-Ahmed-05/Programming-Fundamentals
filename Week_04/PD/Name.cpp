// Write a program that prints your name in the center of the screen using the gotoxy function.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int, int);
void W(int);
void A(int);
void L(int);
void E(int);
void D(int);

int main()
{
    system("cls");
    W(5);
    A(27);
    L(43);
    E(56);
    E(69);
    D(82);
}

void GotoXY(int x, int y)
{  
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
void W(int x)
{
    GotoXY(x,5);
    cout << "W                 W" << endl;
    GotoXY(x,6);
    cout << "W                 W" << endl;
    GotoXY(x,7);
    cout << "W        W        W" << endl;
    GotoXY(x,8);
    cout << "W      W   W      W" << endl;
    GotoXY(x,9);
    cout << "W    W       W    W" << endl;
    GotoXY(x,10);
    cout << "W  W           W  W" << endl;
    GotoXY(x,11);
    cout << "W                 W" << endl;
}
void A(int x)
{
    GotoXY(x,5);
     cout << "      A      " << endl;
    GotoXY(x,6);
     cout << "     A A     " << endl;
    GotoXY(x,7);
     cout << "    A   A    " << endl;
    GotoXY(x,8);
     cout << "   AAAAAAA   " << endl;
    GotoXY(x,9);
     cout << "  A       A  " << endl;
    GotoXY(x,10);
     cout << " A         A " << endl;
    GotoXY(x,11);
     cout << "A           A" << endl;
}
void L(int x)
{
    GotoXY(x,5);
    cout << "L         " << endl;
    GotoXY(x,6);
    cout << "L         " << endl;
    GotoXY(x,7);
    cout << "L         " << endl;
    GotoXY(x,8);
    cout << "L         " << endl;
    GotoXY(x,9);
    cout << "L         " << endl;
    GotoXY(x,10);
    cout << "L         " << endl;
    GotoXY(x,11);
    cout << "LLLLLLLLLL" << endl;
}
void E(int x)
{
    GotoXY(x,5);
    cout << "EEEEEEEEEE" << endl;
    GotoXY(x,6);
    cout << "E         " << endl;
    GotoXY(x,7);
    cout << "E         " << endl;
    GotoXY(x,8);
    cout << "EEEEEE    " << endl;
    GotoXY(x,9);
    cout << "E         " << endl;
    GotoXY(x,10);
    cout << "E         " << endl;
    GotoXY(x,11);
    cout << "EEEEEEEEEE" << endl;
}
void D(int x)
{
    GotoXY(x,5);
    cout << "DDDDDDDD     " << endl;
    GotoXY(x,6);
    cout << "D        D   " << endl;
    GotoXY(x,7);
    cout << "D          D " << endl;
    GotoXY(x,8);
    cout << "D           D " << endl;
    GotoXY(x,9);
    cout << "D          D " << endl;
    GotoXY(x,10);
    cout << "D        D   " << endl;
    GotoXY(x,11);
    cout << "DDDDDDDD     " << endl;
}