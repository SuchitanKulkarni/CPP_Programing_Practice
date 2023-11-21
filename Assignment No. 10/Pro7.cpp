/*

7.For following main(),scan 2 strings from user and check if they are equal or not.
Do not declare your own varibale or array in program.Use the given variable
only.
	int main()
	{
		char *p,*q;
		int res;
	}
	*/
	
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q;
	int res;
	
	p = new char[80];
	q = new char[80];
	
	cout<<"enter the string 1 : "<<endl;
	cin.getline(p,80);
	
	cout<<"enter the string 2 : "<<endl;
	cin.getline(q,80);
	
	res = strcmp(p,q);
	
	if(res == -1)
	{
		cout<<"string 2 is greater "<<endl;
	}
	else
	{
		cout<<"string 1 is greater"<<endl;
	}
	return 0;
}
