/* 1.WAP to understand default,parameterized and copy constructor.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		number()
		{
			cout<<"\nin default"<<endl;
		}
		number(int a)
		{
			cout<<"in parameterized"<<endl;
		}
		number(number & temp)
		{
			cout<<"in copy "<<endl;
		}
};

int main()
{
	number T1;
	number T2(5);
	number T3(T2);
	
	return 0;
}
