// This program uses the & operator to determine a variable�s
// address and the sizeof operator to determine its size.
//
// revised by Gang-Ryung Uh to demonstrate the difference between
//      reference variable and pointer variable
//
#include <iostream>
using namespace std;

int main()
{
   int x = 25;
   int *ptrX;
   int &refX = x;

   ptrX = &x;
   cout << "The address of x is " << &x << endl;
   cout << "The address of refX is " << &refX << endl;
   cout << "The address of ptrX is " << &ptrX << endl;
   cout << "The size of x is " << sizeof(x) << " bytes\n";
   cout << "The value in x is " << x << endl;

   cout << endl << endl;

   cout << "The size of ptrX is " << sizeof(ptrX) << " bytes\n";
   cout << "The value of ptrX is " << ptrX << "\n";
   cout << "The value of x via ptrX is " << *ptrX << "\n";
   return 0;
}