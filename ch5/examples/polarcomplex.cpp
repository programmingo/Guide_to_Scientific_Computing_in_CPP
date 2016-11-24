/*
 * Example
 * pointer as function arguments
 */

#include<iostream>
#include<cmath>

using namespace std;

void CalReIm(double r, double theta, double* Re, double* Im);

int main(int argc, char* argv[])
{
 double r=3.4;
 double theta=1.23;
 double x,y;

 CalReIm(r, theta, &x, &y);

 cout << "Re=" << x << endl;
 cout << "Im=" << y << endl;

 return 0;
}

void CalReIm(double r, double theta, double* Re, double* Im)
{
 *Re=r*cos(theta);
 *Im=r*sin(theta);
}
 
