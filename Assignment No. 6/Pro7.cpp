/* Q.Complete the remaining code for given main() function.
Do not change the main() function.

1)class Number contains 2 public datamembers.x and y.
	int main()
	{
		Number T1,T2;
		T1.getdata();
		T2.getdata();
		Number::print(T1);
		Number::print(T2);
		return 0;
	}
	
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void getdata()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		static void print(Number p)
		{
			cout<<" x = "<<p.x<<" y = "<<p.y;
		}
};
int main()
	{
		Number T1,T2;
		T1.getdata();
		T2.getdata();
		Number::print(T1);
		Number::print(T2);
		return 0;
	}
