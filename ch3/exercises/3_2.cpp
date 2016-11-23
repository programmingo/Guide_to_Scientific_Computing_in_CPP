/*
 * Exercise 3.2
 * This program which counts the number of lines in a file.
 * If you deal a data file, it counts the number of rows.
 */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
 string line;
 ifstream read_file("x_and_y.dat");
 if (!read_file.is_open())
   return 1;

 int number_of_rows=0;

 //while (!read_file.eof()) 
 /*incorrect, it will count the last line twice*/
 //while (!read_file.fail())
 /*incorrect*/
 while (getline(read_file, line)) 
 /*correct*/
 {
  double dummy1, dummy2, dummy3, dummy4;
  read_file >> dummy1 >> dummy2;
  read_file >> dummy3 >> dummy4;
  number_of_rows++;
 }

 cout << "Numbers of rows = " << number_of_rows << endl;

 read_file.close();
 return 0;
}
