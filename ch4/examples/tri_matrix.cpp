/*
 * Example 
 * triangular matrix
 */

#include<iostream>
#define ROWS 10
#define COLS 10

using namespace std;

void zeros(int *arr, int n);
void show_rows(int *arr, int n);

int main(int argc, char* argv[])
{
 int **A;
 int columns[ROWS]={0};
 A= new int *[ROWS];

 for (int i=0; i<ROWS; i++)
 {
  A[i]= new int [i+1];
  columns[i]=i+1;
 }

 for (int i=0; i<ROWS; i++)
 {
  zeros(A[i], columns[i]);
 }

 for (int i=0; i<ROWS; i++)
 {
  show_rows(A[i], columns[i]);
  cout << endl;
 }
 
 for (int i=0; i<ROWS; i++)
 {
  delete [] A[i];
 }
 delete [] A;

 return 0;
}

void zeros(int *arr, int n)
{
 int *ptr;
 
 for (ptr=arr; ptr<arr+n; ptr++)
   *ptr=0;

 return;
}

void show_rows(int *arr, int n)
{
 int *ptr;
 for (ptr=&arr[0]; ptr<&arr[n]; ptr++)
   cout << *ptr << " ";

 return;
}
