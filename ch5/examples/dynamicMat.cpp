/*
 * Example
 * returning pointer from a function
 * functional allocate and deallocate a memory of matrix
 */

#include<iostream>
#define ROWS 5
#define COLS 3

using namespace std;

double **AllocateMatrix(int numRows, int numCols);
void FreeMatrix(int numRows, double **matrix);

int main(int argc, char* argv[])
{
 double **A;
 A=AllocateMatrix(ROWS,COLS);
 A[0][1]=2.0;
 A[4][2]=4.0;
	
 for (int i=0; i<ROWS; i++){
   for (int j=0; j<COLS; j++){
     cout << A[i][j] << " ";
   }
   cout << endl;
 }

 FreeMatrix(ROWS,A);

 return 0;
}

// function to allocate memory for a matrix dynamically
double **AllocateMatrix(int numRows, int numCols)
{
 double **matrix;
 matrix= new double* [numRows];
 for (int i=0; i<numRows; i++)
 {
  matrix[i]= new double [numCols];
 }
	
 return matrix;
}

// function to free memory of a matrix
void FreeMatrix(int numRows, double **matrix)
{
 for (int i=0; i<numRows; i++)
 {
  delete[] matrix[i];
 }
 delete[] matrix;
}

