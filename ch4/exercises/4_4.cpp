/*
 * Exercise 4.4 
 * matrix plus
 */

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#define ROWS 2
#define COLS 2

using namespace std;

void matrix_plus(double **A, double **B, double **C);
void show_elements(double *arr, int N);

int main(void)
{
 srand((unsigned) time(NULL));

 double **A, **B, **C;
 A= new double *[ROWS];
 B= new double *[ROWS];
 C= new double *[ROWS];

 for (int i=0; i<ROWS; i++)
 {
  A[i]= new double [COLS];
  B[i]= new double [COLS];
  C[i]= new double [COLS];
 }

 for (int i=0; i<ROWS; i++)
   for (int j=0; j<COLS; j++)
   {
    A[i][j]=rand() % 10;
    B[i][j]=rand() % 10;
   }
 
 matrix_plus(A, B, C);

 cout << "A " << endl;
 for (int i=0; i<ROWS; i++)
   show_elements(A[i], COLS);
 cout << endl; 

 cout << "B " << endl;
 for (int i=0; i<ROWS; i++)
   show_elements(B[i], COLS);
 cout << endl;

 cout << "C=A+B " << endl;
 for (int i=0; i<ROWS; i++)
   show_elements(C[i], COLS);
 cout << endl;

 for (int i=0; i<ROWS; i++)
 {
  delete [] A[i];
  delete [] B[i];
  delete [] C[i];
 }
 delete [] A;
 delete [] B;
 delete [] C;

 return 0;
}

void matrix_plus(double **A, double **B, double **C)
{
 for (int i=0; i<ROWS; i++)
   for (int j=0; j<COLS; j++)
    C[i][j]=A[i][j]+B[i][j];

 return;
}

void show_elements(double *arr, int N)
{
 double *ptr;
 for (ptr=arr; ptr<arr+N; ptr++)
   cout << setw(2) << *ptr << " ";
 cout<< endl;

 return;
}
