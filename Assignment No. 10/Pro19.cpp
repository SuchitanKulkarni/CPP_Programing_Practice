/*18.WAP to understand constant member functions.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		void show() const
		{
			cout<<"in show"<<endl;
		}
};
int main()
{
	number obj;
	number T1 = {23,56};
	T1.show();
	obj.show();
	
	return 0;
}
