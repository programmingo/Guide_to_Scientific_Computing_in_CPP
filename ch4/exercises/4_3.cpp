/*
 * Exercise 4.3 
 * vector dot product 
 * check program have de-allocated memory correctly
 */

#include<iostream>
#define LEN 3

using namespace std;

double dot(double *a, double *b);

int main(void)
{
 double *a, *b;
 double product; 
 //for (int i=0; i<1E9; i++){
 a= new double [LEN];
 b= new double [LEN];

 for (int i=0; i<LEN; i++)
 {
  a[i]=(i+1)*2.0; // a={2, 4, 6}
  b[i]=(i+1)*2.0-1; // b={1, 3, 5}
 }

 product=dot(a,b);

 cout << "a= ";
 for (int i=0; i<LEN; i++)
   cout << a[i] << " ";
 cout << endl;
 cout << "b= ";
 for (int j=0; j<LEN; j++)
   cout << b[j] << " ";
 cout << endl;
 cout << "dot(a,b)= " << product << endl;

 delete [] a;
 delete [] b;
 //}
 return 0;
}

double dot(double *a, double *b)
{
 double prod=0.0;
 for (int i=0; i<LEN; i++)
  prod+=a[i]*b[i];

 return prod;
}
