/*
 *  function to allocate and deallocate memory for a matrix dynamically
 */

#ifndef ALLOCATEMATRIX_HPP
#define ALLOCATEMATRIX_HPP

double** AllocateMatrix(int numRows, int numCols)
{
 double **matrix;
 matrix= new double* [numRows];
 for (int i=0; i<numRows; i++)
 {
  matrix[i]= new double [numCols](); // () means initialize elements to 0
 }

 return matrix;
}

void FreeMatrix(int numRows, double **matrix)
{
 for (int i=0; i<numRows; i++)
 {
  delete[] matrix[i];
 }
 delete[] matrix;
}

#endif
