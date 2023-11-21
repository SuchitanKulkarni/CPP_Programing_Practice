/* Q9.WAP to understand working of copy constructor.
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
			cout<<"parameterized"<<endl;
		}
		number(number &temp)
		{
			temp.x = 89;
			cout<<"in copy "<<endl;
		}
		
};
int main()
{
	number T1(8);
	number T2(T1);
	
	cout<<T2.x<<end; //-------------(carry defaukt value)
	cout<<" "<<T1.x<<endl;
	
	return 0;
}
