/*
 * Exercise 4.2
 */
#include<iostream>

using namespace std;

void swap(int *ptr1, int *ptr2);

int main(void)
{
 int a=3, b=5;

 cout << "Before swap(a,b)" << endl;
 cout << "a= " << a << ", b= " << b << endl;

 swap(&a, &b);
 
 cout << "After swap(a,b)" << endl;
 cout << "a= " << a << ", b= " << b << endl;

 return 0;
}

void swap(int *ptr1, int *ptr2)
{
 int temp;
 temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=temp;
 return;
}
