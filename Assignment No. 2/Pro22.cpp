/* Q22.Scan a range from user.Define function print() to print all elements in range in ascending order.
e.g. If user enters 5 and 10.The output must be 5,6,7,8,9,10
If user enters 10 and 5.The output must be 5,6,7,8,9,10 */

#include<iostream>
using namespace std;
void print(int a,int b);
int main()
{
	int a,b;
	cout<<"Enter the range : "<<endl;
	cin>>a>>b;
	
	print(a,b);
	
	return 0;
}
void print(int a,int b)
{
	int i,min,max;
	if(a>b)
	{
		 max = a;
		 min = b;
	}
	else
	{
		 max = b;
		 min = a;
	}
	for(i=min;i<=max;i++)
	{
		cout<<i<<" ";
	}
}
