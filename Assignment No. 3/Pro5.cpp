/* 5.Scan array of 4 alphabets from user.Print ascii value of each alphabet in array.
([] notation) */

#include<iostream>
using namespace std;

int main()
{
	char ch[4];
	char *p = &ch[0];
	
	int i;
	cout<<"Enter the 4 characters : "<<endl;
	for(i=0;i<4;i++)
	{
		cin>>*(p+i);
	}
	for(i=0;i<4;i++)
	{
		cout<<(int)*(p+i)<<" ";
	}
	
	return 0;
}
