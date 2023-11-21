/* 
6.For following main(),scan a string from user and print its length.
Do not declare your own varibale or array in program.Use the given variable
only.
	int main()
	{
		char *p;
}
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p;
	
	p = new char[60];
	
	cout<<"enter the string : "<<endl;
	cin.getline(p,60);
	
	cout<<"Length = "<<strlen(p);
	
	return 0;
	
}
