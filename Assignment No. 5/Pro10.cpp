/* Q10.Scan a string from user.Copy it in another string.Do not use string.h */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"enter the string : "<<endl;
	cin.getline(str,100);
	
	char arr[100];
	int i;
	while(str[i]!='\0')
	{
		arr[i] = str[i];
		
		i++;
	}
	
	cout<<"arr = "<<arr;
}

