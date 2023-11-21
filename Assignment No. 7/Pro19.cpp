/* 4.
	class Number
	{
		int x,y;
		void addition(parameter list);
		public:
			void scan();
			void print();
			void myfun(parameter list);
		//Do not add your own memberfunction.		
	};
	int main()
	{
		//Perform T3 = T1 + T2 for given class Number.
	}
*/

#include<iostream>
using namespace std;

	class Number
	{
		int x,y;
		void addition(Number a, Number b);
		public:
			void scan();
			void print();
			void myfun(Number p , Number q);		
	};
	void Number :: scan()
	{
		cout<<"enter the x and y : "<<endl;
		cin>>x>>y;
	}
	void Number :: addition(Number a , Number b)
	{
		x = a.x + b.x;
		y = a.y + b.y;
	}
	void Number ::  print()
	{
		cout<<" x = "<<x<<" y = "<<y;
	}
	void Number :: myfun(Number p,Number q)
	{
		 addition(p,q);
	}
	int main()
	{
	     Number T1,T2,T3,t4;
	     
	     T1.scan();
	     T2.scan();
	     T3.myfun(T1,T2);
	     T3.print();
	     
	     return 0;
	}

