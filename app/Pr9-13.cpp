// This program demonstrates a pointer to const parameter
#include <iostream>
using namespace std;

void displayValues(int *, int);

int main()
{
   // Array sizes
   const int SIZE = 6;

   // Define an array of const ints.
   int array1[SIZE] = { 1, 2, 3, 4, 5, 6 };

   // Define an array of non-const ints.
   int array2[SIZE] = { 2, 4, 6, 8, 10, 12 };

   // Display the contents of the const array.
   displayValues(array1, SIZE);

   // Display the contents of the non-const array.
   displayValues(array2, SIZE);
   return 0;
}

//***************************************************
// The displayValues function uses a pointer to     *
// parameter to display the contents of an array.   *
//***************************************************

void displayValues(int *numbers, int size)
{
   // Display all the values using the pointer arithmetic
}