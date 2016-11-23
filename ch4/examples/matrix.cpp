/*
 * Example 
 * Dynamic memory allocation for a matrix
 */

#include<iostream>
#define ROWS 5
#define COLS 3

int main(int argc, char* argv[])
{
 double **A; 
 // Declare A is pointer to pointer
 A= new double *[ROWS]; 
 // A is an array of pointer with dimension ROWS

 for (int i=0; i<ROWS; i++)
 {
  A[i]= new double [COLS]; 
  // create every rows with COLS dimension
  // each rows is a pointer to an array
 }

 for (int i=0; i<ROWS; i++)
 {
  delete [] A[i]; // Deallocate every rows
 }
 delete [] A; // Deallocate the array of pointers A

 return 0;
}
