// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 8;
   int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
   int *numPtr = nullptr;   // Pointer
   int count;				// Counter variable for loops

   // Make numPtr point to the set array.
   numPtr = set;

   // Use the pointer to display the array contents via numPtr.
   cout << "The numbers in set are:\n";

   // Display the array contents in reverse order.
   cout << "\nThe numbers in set backward are:\n";

   return 0;
}