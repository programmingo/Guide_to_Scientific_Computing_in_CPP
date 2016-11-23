/*
 * Example 
 * Dynamically allocated memory for arrays
 */

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
 double *x;
 double *y;
 x= new double [10];
 y= new double [10];

 for (int i=1; i<=10; i++)
 {
  x[i]= (double)(i);
  y[i]= 2.0*x[i];
  cout << x[i] << " " << y[i] << endl;
 }

 delete [] x;
 delete [] y;

 return 0;
}
