/*
 * Example
 * Newton-Raphson method to calculate coubic root.
 * x_n=x_(n-1)-(((x_(n-1))^3-K)/3(x_(n-1))^2)
 */

#include<iostream>
#include<cmath>

using namespace std;

void CubicRoot(double &x, double K, 
               double tolerance=1.0E-6, 
               int maxIterations=100);

int main(int argv, char* argc[])
{
 double x=1.0; // trial value
 double K=12.0; // you wish get 12^(1/3)

 // Calculate cubic root using default values
 CubicRoot(x,K);
 cout << "x^(1/3)=" << x << endl;

 // Calculate cubic root using a tolerance of 0.001 and
 // the default maximum number of iterations
 double tolerance=0.001;
 CubicRoot(x,K,tolerance);
 //cout << "x^(1/3)=" << x << endl;

 // Calculate cubic root using a tolerance of 0.001 and
 // the default maximum number of iterations of 50
 int maxIterations=50;
 CubicRoot(x,K,tolerance,maxIterations);
 //cout << "x^(1/3)=" << x << endl; 

 return 0;
}

void CubicRoot(double &x, double K, 
               double tolerance, 
               int maxIterations)
{
 int iterations;
 double residual=x*x*x-K;

 iterations=0;
 while((fabs(residual)>tolerance) &&
       (iterations < maxIterations))
 {
  x=x-(x*x*x-K)/(3.0*x*x);
  residual=x*x*x-K;
  iterations++;
 }
}
