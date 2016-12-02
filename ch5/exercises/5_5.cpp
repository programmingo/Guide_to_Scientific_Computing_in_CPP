/*
 * Exercise 5.5 and 5.6
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"AllocateMatrix.hpp"
#include"Multiply.hpp"

using std:: cout;
using std:: endl;

double** AllocateMatrix(int numRows, int numCols);
void FreeMatrix(int numRows, double **matrix);
double** Multiply(double **A, double **B, int *dim);

int main(void)
{
 int row_A=3, col_A=3, row_B=3, col_B=5;
 double **A=nullptr, **B=nullptr, **C=nullptr;
 int dim[4]={row_A, col_A, row_B, col_B};

 srand((unsigned) time(nullptr));

 A=AllocateMatrix(row_A, col_A);
 B=AllocateMatrix(row_B, col_B);

 // Initialize elements of matrix
 cout << "A" << endl;
 for (int i=0; i<row_A; i++){
   for (int j=0; j<col_A; j++){
     A[i][j]=(rand() % 10)*1.0;
     cout << A[i][j] << " ";
   }
 cout << endl;
 }

 cout << "B" << endl;
 for (int i=0; i<row_B; i++){
   for (int j=0; j<col_B; j++){
     B[i][j]=(rand() % 10)*1.0;
     cout << B[i][j] << " ";
   }
 cout << endl;
 }

 C=AllocateMatrix(row_A, col_B);
 C=Multiply(A, B, dim);

 cout << "C=A*B" << endl;
 for (int i=0; i<dim[0]; i++){
   for (int j=0; j<dim[3]; j++){
     cout << C[i][j] << " ";
   }
 cout << endl;
 }
 
 FreeMatrix(row_A, A);
 FreeMatrix(row_B, B);
 FreeMatrix(dim[0], C);
 A=nullptr;
 B=nullptr;
 C=nullptr;

 return 0;
}
