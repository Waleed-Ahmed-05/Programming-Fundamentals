// Write a program to make Pacman patrol(continuously move up and down) vertically inside the maze.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int, int);
void Maze();
void Player_Move_Down(int , int);
void Player_Move_Up(int , int);

int main()
{
    int X = 12, Y = 2;
    system("cls");
    Maze();
    while(true)
    {
        Player_Move_Down(X,Y);
        if(Y < 7)
        {
            Y++;
        }
        else if(Y == 7)
        {
            while(true)
            {
                Player_Move_Up(X,Y);
                if(Y != 2)
                {
                    Y--;
                }
                else if(Y == 2)
                {
                    break;
                }
            }
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
void Player_Move_Up(int x, int y)
{
    GotoXY(x, y+1);
    cout << " ";
    GotoXY(x,y);
    cout << "P";
    Sleep(100);
}
void Player_Move_Down(int x, int y)
{
    GotoXY(x, y-1);
    cout << " ";
    GotoXY(x,y);
    cout << "P";
    Sleep(100);
}