// Finding Total Number of Kilobytes via Number of Megabytes given by the User 

#include <iostream>
using namespace std;
int main()
{
     float MB,KB,Bytes,Bits;
     cout << "Enter number of megabytes you want to convert: ";
     cin >> MB;
     KB = MB * 1024;
     Bytes = KB * 1024;
     Bits = Bytes * 8;
     cout << "Total number of kilobytes converted are : " << KB << endl;
     cout << "Total number of bytes converted are : " << Bytes << endl;
     cout << "Total number of bits converted are : " << Bits << endl;
}