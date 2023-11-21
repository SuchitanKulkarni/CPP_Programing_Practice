/* Q2.Scan 2 strings from user.Print them. */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	
	cout<<"enter the first string : "<<endl;
	cin.getline(str,100);
	
	cout<<"enter the second string  : "<<endl;
	cin.getline(arr,100);
	
	cout<<str<<"   "<<arr;
	
	return 0;
}
