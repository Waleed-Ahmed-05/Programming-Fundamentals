// Tom Cat likes to sleep all day, but his owner always plays with him whenever he has free time. To sleep well, the norm of games that Tom has is 30,000 minutes per year. The time for games he has depends on the holidays that his owner has. Write a program that reads the number of holidays and prints whether Tom can sleep well and how much the difference from the current year’s norm. It is assumed that there are 365 days in one year.

#include <iostream>
using namespace std;

int Time(int);

int main()
{
    int Holidays;
    cout << "Enter total holidays taken by Tom's owner: ";
    cin >> Holidays;
    Time(Holidays);
}

int Time(int Holidays)
{
    int Days = 365 - Holidays;
    int Time = (Days * 63) + (Holidays * 127);
    int Sleep = 30000 - Time;
    int Hours = Sleep / 60;
    int Minutes = Sleep - (Hours * 60);
    if(Sleep > 0)
    {
        cout << "Tom sleeps well " << endl << Hours << " hours and " << Minutes << " minutes less for play.";
    }
    else
    {
        cout << "Tom will run away " << endl << (-1 * Hours) << " hours and " << (-1 * Minutes) << " minutes for play.";
    }
}