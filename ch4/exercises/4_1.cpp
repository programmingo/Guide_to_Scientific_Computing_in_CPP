/*
 * Exercise 4.1
 */

#include<iostream>

using namespace std;

int main(void)
{
 int i=5;
 int *p_j=&i;
 int *p_k;

 p_k= new int;

 *p_k=(*p_j)*5;

 cout << "i= " << i << " *p_j= " << *p_j << " *p_k= " << *p_k;
 cout << endl;
 cout << "&i= " << &i << " p_j= " << p_j << " p_k= " << p_k;
 cout << endl;

 delete p_k;

 return 0;
}

