/*
 * Exercise 3.3
 * Euler integration method for solving 1st order ODE.
 * In other words, this is 1st order Taylor approximation.
 * Errors from y-iteration, since reminder Taylor series term.
 */
#include<iostream>
#include<cmath>
#include<cassert>
#include<fstream>

using namespace std;

int main(void)
{
 double step=0.01;
 double N=2.0;
 double x, y, dydx;

 ofstream write("xy.dat");
 assert(write.is_open());
 write.precision(10);
 
 // ode: y'(t)=2-exp(-4t)-2y(t)
 // exact solution: y(t)=1+(1/2)exp(-4t)-(1/2)exp(-2t)

 x=0.0; // initial value x0
 y=1.0; // initial value y(0)=1
 while (x<=N)
 {
  dydx=2-exp(-4*x)-2*y;
  y+=dydx*step; // y-iteration
  x+=step;
  write << x << " " << y << endl;
 }
 write.close();
 
 return 0;
}
