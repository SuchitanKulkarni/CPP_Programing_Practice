/* Q8.Scan a string from user.Count number of words in a string. */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"enter the string :"<<endl;
	cin.getline(str,100);
	
	int i,count = 0;
	
	while(str[i]!='\0')
	{
		if(str[i] ==' ')
		{
			count++;
		}
		
		i++;
	}
	
	cout<<"count = "<<count+1;
	
	return 0;	
}

