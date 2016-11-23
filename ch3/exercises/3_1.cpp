/*
 * Exercise 3.1
 * Instead of .close(), try .flush()
 * precision of scientific output
 */

#include<iostream>
#include<fstream>
#include<cassert>

using namespace std;

int main(int argc, char* argv[])
{
 
 double x[4]={0.0, 1.0, 1.0, 0.0};
 double y[4]={0.0, 0.0, 1.0, 1.0};

 ofstream write_file("x_and_y.dat");
 assert(write_file.is_open());
 write_file.setf(ios::scientific);
 // Write number as +x.<13digits>e+00
 write_file.setf(ios::showpos);
 write_file.precision(10);

 for (int i=0; i<(sizeof(x)/sizeof(double)); i++)
   write_file << x[i] << " ";
 write_file << endl;

 write_file.flush();

 for (int j=0; j<(sizeof(y)/sizeof(double)); j++)
   write_file << y[j] << " ";
 write_file << endl;

 // write_file.close();
 return 0;
}
