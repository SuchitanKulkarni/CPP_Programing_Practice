/* Q7.Scan a string from user.Find its length.(Do not use string.h) */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	
	cout<<"enter the string :"<<endl;
	cin.getline(str,100);
	
	int i;
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	cout<<"length = "<<i;
	
	return 0;
}
