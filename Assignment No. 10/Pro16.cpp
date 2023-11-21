/*
15.WAP to check the sequence of execution of constructor and destructor
when multiple objects go out of scope.Use inner scopes also.
*/

#include<iostream>
using namespace std;

class number
{
	public:
	int x;
	number(int a)
	{
		 x = a;
		cout<<"default "<<x<<endl;
		}	
		~number()
		{
			cout<<"destroy "<<x<<endl;
		}
};

int main()
{
	{
		number T1(1);
		{
			number T2(2);
			{
				number T3(3);
				{
					number T4(4);
				}
				number T5(5);
			}
			number T6(6);
		}
		number T7(7);
	}
	number T8(8);
}
