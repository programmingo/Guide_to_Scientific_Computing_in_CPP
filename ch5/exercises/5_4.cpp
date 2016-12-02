/*
 * Execise 5.4 main()
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"st_dev.hpp"
#define N 10

using std:: cout;
using std:: endl;

double cal_std(double *arr, const int n);

int main(void)
{
 double score[N]={0};
 double sstd=0;

 srand((unsigned) time(nullptr));

 for (int i=0; i<N; i++){
   score[i]=(rand() % 100)+1;
   cout << score[i] << " ";
 }
 cout << endl;

 sstd=cal_std(score, N);

 cout << "std= " << sstd << endl;

 return 0;
}
