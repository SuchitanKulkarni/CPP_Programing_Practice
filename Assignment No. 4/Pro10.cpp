/*Q10.Scan a string from user.Copy it in another string.Do not use string.h
*/

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"Enter the string :"<<endl;
	cin.getline(str,100);
	int i;
	char arr[100];
	while(str[i]!='\0')
	{
		arr[i]=str[i];
		
		i++;
	}
	arr[i]='\0';
	
	cout<<arr<<endl<<str;
}
