/*
 * Example
 * function pointers as arguments
 */

#include<iostream>
#include<cmath>

using namespace std;

double SolveNewton(double (*pFunc) (double),
                   double (*pFuncPrime) (double),
                   double x);
double Sqrt10(double x);
double Sqrt10Prime(double x);
double Cube10(double x);
double Cube10Prime(double x);

int main(int argc, char* argv[])
{
 cout << "Root sqrt(x)=10, with guess 1.0 is "
      << SolveNewton(Sqrt10,Sqrt10Prime,1.0) << endl;
 cout << "Root x**3=10, with guess 1.0 is "
      << SolveNewton(Cube10,Cube10Prime,1.0) << endl;

 return 0;
}

// implementation of Newton-Raphson iteration
double SolveNewton(double (*pFunc) (double),
                   double (*pFuncPrime) (double),
                   double x)
{
 double step;
 do
 {
  step=(*pFunc)(x)/(*pFuncPrime)(x);
  x-=step;
 } while (fabs(step)>1.0E-5);

 return x;
}

// function to calculate x that satisfies sqrt(x)=10
double Sqrt10(double x)
{
 return sqrt(x)-10.0;
}

// derivative of function to calculate x that satisfies
// sqrt(x)=10
double Sqrt10Prime(double x)
{
 return 1.0/(2.0*sqrt(x));
}

// function to calculate x that satisfies x*x*x=10
double Cube10(double x)
{
 return x*x*x-10.0;
}

// derivative of function to calculate x that satisfies
// x*x*x=10
double Cube10Prime(double x)
{
 return 3.0*x*x;
}
