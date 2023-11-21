/* 1.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}
	*/
	
	
#include<iostream>
using namespace std;

class Number
{
	public :
		int x,y;
		
		void scan()
		{
			cout<<" enter the x and y : "<<endl;
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<" x  = "<<x<<" y = "<<y<<endl;
		}
};

	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}

