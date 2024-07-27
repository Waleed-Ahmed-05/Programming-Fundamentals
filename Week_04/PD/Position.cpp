// Use the gotoxy function to print the Pacman at some point in the maze.

#include <iostream>
#include <windows.h>
using namespace std;

void GotoXY(int, int);
void Maze();

int main()
{
    system("cls");
    Maze();
    GotoXY(5,5);
    cout << "P";
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