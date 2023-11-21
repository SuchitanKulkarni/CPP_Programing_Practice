/* 11.WAP to check working of scope resolution operator(::). */

#include<iostream>
using namespace std;

int p=90;

int main()
{
	int p = 10;
	
	cout<<"P = "<<p<<endl<<"p = "<<::p;
	
	return 0;
}

