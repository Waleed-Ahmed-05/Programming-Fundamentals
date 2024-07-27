// Use the while(true) to print the Pacman and move horizontally indefinitely.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int, int);
void Maze();
void Player_Move(int , int);

int main()
{
    int X = 5, Y = 5;
    system("cls");
    Maze();
    while(true)
    {
        Player_Move(X,Y);
        if(X < 20)
        {
            X++;
        }
        else if(X == 20)
        {
            GotoXY(X,Y);
            cout << " ";
            X = 5;
        }
    }
}

void Maze()
{
    cout << "#########################" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#                       #" << endl;
    cout << "#########################" << endl;
}
void GotoXY(int x, int y)
{
    COORD Coordinates;
    Coordinates.X = x;
    Coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
void Player_Move(int x, int y)
{
    GotoXY(x-1, y);
    cout << " ";
    GotoXY(x,y);
    cout << "P";
    Sleep(100);
}