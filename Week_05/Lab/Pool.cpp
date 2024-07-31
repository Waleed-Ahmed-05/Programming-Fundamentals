#include <iostream>
using namespace std;

void Pool(int, int, int, float);

int main() 
{
    int V, P1, P2;
    float H;
    cout << "Enter the volume of the pool (V): ";
    cin >> V;
    cout << "Enter the flow rate of the first pipe per hour (P1): ";
    cin >> P1;
    cout << "Enter the flow rate of the second pipe per hour (P2): ";
    cin >> P2;
    cout << "Enter the hours the worker is absent (H): ";
    cin >> H;
    Pool(V, P1, P2, H);
}

void Pool(int V, int P1, int P2, float H)
{
    float Volume = (P1 + P2) * H;
    if (Volume <= V) 
    {
        int Percentage = (Volume / V) * 100;
        int Pipe_01 = (P1 * H / Volume) * 100;
        int Pipe_02 = (P2 * H / Volume) * 100;

        cout << "The pool is " << Percentage << "% full. " << "Pipe 1: " << Pipe_01 << "%. " << "Pipe 2: " << Pipe_02 << "%." << endl;
    } 
    else 
    {
        float Overflow = Volume - V;
        cout << "For " << H << " hours the pool overflows with " << Overflow << " liters." << endl;
    }
}
