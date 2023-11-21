/*
16.WAP to understand the working of nested classes.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int n;
		class digit
		{
			public:
				int d;
		};
		digit var;
};

int main()
{
	number obj;
	
	obj.n = 34;
	obj.var.d = 45;
	
	cout<<" obj.n = "<<obj.n<<endl;
	cout<<"obj.var.d = "<<obj.var.d<<endl;
	
	return 0;
}
