/* Q12.
WAP to understand constant objects and constant member functions.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		void show() const
		{
			cout<<"in constant"<<endl;
		}
};

int main()
{
	const number obj;
	obj.show();
	
	number T1;
	T1.show();
	
	return 0;
}
