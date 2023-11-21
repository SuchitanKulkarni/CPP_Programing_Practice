/* Q10.WAP to understand this pointer.
*/

#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		
		void scan(int a,int b)
		{
			int x;
			x = a ; // -------------(it will access the local variable instead of data member)
			this->x = b;
			cout<<"x = "<<x<<" this -> x = "<<this->x;
		}
};
int main()
{
	number T1;
	
	T1.scan(5,6);
	
	return 0;
}
