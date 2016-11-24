/*
 * Example
 * function pointers
 */

#include<iostream>

using namespace std;

double myFunction(double x);
double myOtherFunction(double x);

int main(int argc, char* argv[])
{
 double (*p_function) (double x);
 // p_function points to a function that has a double parameter
 // and returns double

 p_function=&myFunction;
 //p_function=myFunction; //this is also correct
 cout << p_function(2.0) << endl;

 p_function=&myOtherFunction;
 //p_function=myOtherFunction; //this is also correct
 cout << p_function(2.0) << endl;

 p_function=nullptr;

 return 0;
}

double myFunction(double x)
{
 return x*x;
}

double myOtherFunction(double x)
{
 return x*x*x;
}
