/*
14.
WAP to make destructor of one class a friend of another class.
*/

#include<iostream>
using namespace std;



class digit
{
	public:
		
		~digit();
};

class number
{
	int d;
	
	friend digit::~digit();
};

digit::~digit()
		{
			number obj;
			obj.d = 23;
			cout<<" d = "<<obj.d;
		}
int main()
{
	digit d;
	
	return 0;
}
