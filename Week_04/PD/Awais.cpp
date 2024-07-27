// Write a program that prints “AWAIS” (Vertically) on the console screen by using Big Alphabets.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int, int);
void A(int);
void W(int);
void I(int);
void S(int);

int main()
{
    system("cls");
    A(5);
    W(21);
    A(43);
    I(59);
    S(74);
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
void I(int x)
{
    GotoXY(x,5);
    cout << "IIIIIIIIIIII" << endl;
    GotoXY(x,6);
    cout << "     II      " << endl;
    GotoXY(x,7);
    cout << "     II      " << endl;
    GotoXY(x,8);
    cout << "     II      " << endl;
    GotoXY(x,9);
    cout << "     II      " << endl;
    GotoXY(x,10);
    cout << "     II      " << endl;
    GotoXY(x,11);
    cout << "IIIIIIIIIIII" << endl;
}
void S(int x)
{
    GotoXY(x,5);
    cout << " SSSSSSSS " << endl;
    GotoXY(x,6);
    cout << "S        S" << endl;
    GotoXY(x,7);
    cout << "  S       " << endl;
    GotoXY(x,8);
    cout << "    S     " << endl;
    GotoXY(x,9);
    cout << "      S   " << endl;
    GotoXY(x,10);
    cout << "S        S" << endl;
    GotoXY(x,11);
    cout << " SSSSSSSS " << endl;
}
void GotoXY(int x, int y)
{  
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}