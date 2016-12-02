/*
 * Exercise 5.5
 * a function of Multiply that be used to multiply two matrices
 */

#include<iostream>
#include<cassert>
#include"AllocateMatrix.hpp"

double** AllocateMatrix(int numRows, int numCols);
void FreeMatrix(int numRows, double **matrix);

double** Multiply(double **A, double **B, int *dim)
{
 // dim={row_A, col_A, row_B, col_B}
 assert(dim[1] == dim[2]);

 double **C=nullptr;
 C=AllocateMatrix(dim[0],dim[3]);

 for (int i=0; i<dim[0]; i++)
   for (int j=0; j<dim[3]; j++)
     for (int k=0; k<dim[2]; k++)
       C[i][j]+=A[i][k]*B[k][j];
 
 return C; 
}
