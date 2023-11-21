/* 11.Write a program to explain all rules of references in CPP. */

#include<iostream>
using namespace std;

int main()
{
	int x =10;
	int &y = x;
	cout<<" y = "<<y<<endl;
	y = 20;
	cout<<"x = "<<y<<endl;
	int *p = &x;
	int *&u = p;
	cout<<"x = "<<*u;
    *u =30;
	cout<<"x = "<<*u;
	
	return 0;
}
