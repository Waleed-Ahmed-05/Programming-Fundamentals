// First Version of UAMS System

#include <iostream>
#include <windows.h>
using namespace std;

void Print_Menu();
float Calculate_Aggregate(string, float, float, float);
void Compare_Marks(string, float, string, float);

int main()
{
    string Choice;
    while(true)
    {
        system("cls");
        Print_Menu();
        cout << endl << "Enter your choice: ";
        cin >> Choice;
        system("cls");
        if(Choice == "1")
        {
            string Name;
            float Matric_Marks,Intern_Marks,ECAT_Marks;
            cout << "Enter your name: ";
            cin >> Name;
            cout << "Enter your Matriculation marks: ";
            cin >> Matric_Marks;
            cout << "Enter your Intermediate marks: ";
            cin >> Intern_Marks;
            cout << "Enter your ECAT marks: ";
            cin >> ECAT_Marks;
            Calculate_Aggregate(Name, Matric_Marks, Intern_Marks, ECAT_Marks);
        }
        else if(Choice == "2")
        {
            string Name_01, Name_02;
            float ECAT_Marks_01, ECAT_Marks_02;
            cout << "Enter 1st student's name: ";
            cin >> Name_01;
            cout << "Enter 1st student's ECAT marks: ";
            cin >> ECAT_Marks_01;
            cout << "Enter 2nd student's name: ";
            cin >> Name_02;
            cout << "Enter 2nd student's ECAT marks: ";
            cin >> ECAT_Marks_02;
            Compare_Marks(Name_01, ECAT_Marks_01, Name_02, ECAT_Marks_02);
        }
        else if(Choice == "3")
        {
            break;
        }
        Sleep(5000);
    }
}

void Print_Menu()
{
    cout << "######################################" << endl;
    cout << "#                                    #" << endl;
    cout << "#                                    #" << endl;
    cout << "#     UNIVERSITY OF ENGINEERING      #" << endl;
    cout << "#        & TECHNOLOGY, LAHORE        #" << endl;
    cout << "#                                    #" << endl;
    cout << "#                                    #" << endl;
    cout << "######################################" << endl << endl << endl;
    cout << "       1. Calculate Aggregate" << endl;
    cout << "       2. Compare marks" << endl;
    cout << "       3. Exit" << endl;
}
float Calculate_Aggregate(string N, float M, float I, float E)
{
    float Aggregate = ((M / 1100) * 30) + ((I / 550) * 30) + ((E / 400) * 40);
    cout << "Current aggregate of " << N << " is " << Aggregate << "%.";
}
void Compare_Marks(string N_01, float E_01, string N_02, float E_02)
{
    if(E_01 > E_02)
    {
        cout << N_01 << " is assigned roll no 1." << endl;
        cout << N_02 << " is assigned roll no 2.";
    }
    else if(E_01 < E_02)
    {
        cout << N_02 << " is assigned roll no 1." << endl;
        cout << N_01 << " is assigned roll no 2.";
    }
    else if(E_01 == E_02)
    {
        cout << N_01 << " is assigned roll no 1." << endl;
        cout << N_02 << " is assigned roll no 2.";
    }
}