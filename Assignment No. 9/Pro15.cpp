/* Q15.WAP to understand Inner classes.Define Inner class under public and access it.
Define Inner class under private and try to access it.Read notebook first.*/

#include<iostream>
using namespace std;

class number
{
	public:
		int b;
		class Digit
		{
			public:
				int x;
		};
		Digit var;
};

int main()
{
	number obj;
	obj.b = 35;
	obj.var.x = 13;
	
	cout<<" obj.b = "<<obj.b<<" "<<"obj.var.x = "<<obj.var.x;
	
	return 0;
}
