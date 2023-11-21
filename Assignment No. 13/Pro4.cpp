/*
Q4.WAP to make private memberfunction of one class a friend of another class.
*/

#include<iostream>
using namespace std;

class number
{
	void show()
	{
		cout<<"in private show"<<endl;
	}
	
	public:
		
		void print()
		{
			cout<<"in print"<<endl;
		}
		
		friend class Digit;
};

class Digit
{
	public:
		
		void set()
		{
			number obj;
			
			obj.show();
			
		}
};

int main()
{
	Digit var;
	
	var.set();
	
	return 0;
}

