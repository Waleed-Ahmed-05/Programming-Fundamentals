//Calculating "Student's Result" via Name and Marks of each subject 

#include <iostream>
using namespace std;
int main()
{
     string Name;
     float Subject01,Subject02,Subject03,Subject04,Subject05,Percentage;
     cout << "Enter student's name: ";
     cin >> Name;
     cout << "Enter marks of 1st subject: ";
     cin >> Subject01;
     cout << "Enter marks of 2nd subject: ";
     cin >> Subject02;
     cout << "Enter marks of 3rd subject: ";
     cin >> Subject03;
     cout << "Enter marks of 4th subject: ";
     cin >> Subject04;
     cout << "Enter marks of 5th subject: ";
     cin >> Subject05;
     Percentage = ((Subject01 + Subject02 + Subject03 + Subject04 + Subject05)/500)*100;
     cout << Name << "'s totak percentage is " << Percentage << "%" << ".";
}