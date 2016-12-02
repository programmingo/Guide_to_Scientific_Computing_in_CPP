/*
 * Exercise 5.4
 * a function of standard deviation
 */

#include<cmath>

double mean(double *arr, const int n);

double cal_std(double *arr, const int n)
{
 double m=0.0, sstd=0.0; 

 m=mean(arr, n);
 double sum=0.0;
 for (int i=0; i<n; i++)
   sum+=pow((arr[i]-m),2.0);

 sstd=sqrt(sum/(n-1));

 return sstd;
}

double mean(double *arr, const int n)
{
 double m=0.0;

 double sum=0;
 for (int i=0; i<n; i++)
   sum+=arr[i];

 m=sum/n;

 return m;
}
