/*
 * Exercise 2.6
 * Newton-Raphson method
 * it's an iteration exercise
 */

#include<iostream>
#include<fstream>
#include<cmath>
#include<cassert>
#define N 100

using namespace std;

int main(int argc, char* argv[])
{
 //double x[N+1]={0};
 double x;
 ofstream x_iteration("x_iteration.dat");
 assert(x_iteration.is_open());
 /*
 // 2.6.2 for loop and array implementation	
 x[0]=0;
 for(int i=1; i<=N; i++)
 {
  x[i]=x[i-1]-((exp(x[i-1])+pow(x[i-1],3.0)-5)/
               (exp(x[i-1])+3*pow(x[i-1],2.0)));
  x_iteration << x[i] << endl;
 }
 */
 
 /*
 // 2.6.4 for loop and interative implementation
 x=0;
 for (int i=1; i<=100; i++)
 {
  x-=(exp(x)+pow(x,3.0)-5)/(exp(x)+3*pow(x,2.0));
  x_iteration << x << endl;
 }
 */
 
 // 2.6.5 while loop and given a tolerance for interative implementation
 x=0;
 double x_pre=1.0;
 while (fabs(x-x_pre)>1.0E-6)
 {
  x_pre=x;
  x-=(exp(x)+pow(x,3.0)-5)/(exp(x)+3*pow(x,2.0));
  x_iteration << x << endl;
 }
 
 x_iteration.close();
 
 return 0;
}
