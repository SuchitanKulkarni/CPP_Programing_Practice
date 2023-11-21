/* Q8.WAP to understand default and parameterized constructor.Perform some experiments.
*/

#include<iostream>
using namespace std;

class number
{
	public :
		
		number()
		{
			cout<<"Default"<<endl;
		}
		number(int a)
		{
			cout<<"Parametrized"<<endl;
		}
		
};

int main()
{
	number T1(79);
	number T2;
	
	return 0;
}
