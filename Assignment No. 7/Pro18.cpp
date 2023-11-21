/* 
3.
	class Number
	{
		private:
			int x,y;
			void scan();
			void print();
		public:
			static void scanfun(parameter list);
			static void printfun(parameter list);
		//Do not add your own memberfunction.
		//scan x and y in scan() function only
		//print x and y in print() function only.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	}
*/


#include<iostream>
using namespace std;

class Number
	{
		private:
			int x,y;
			void scan();
			void print();
		public:
			static void scanfun(Number &p);
			static void printfun(Number p);
	};
	
	void Number::scan()
	{
		cout<<"enter the x and y : "<<endl;
		cin>>x>>y;
	}
	
	void Number :: print()
	{
		cout<<" x = "<<x<<" y = "<<y;
	}
	
	 void Number :: scanfun(Number &p)
	{
	     p.scan();
	}
	 void Number :: printfun(Number p)
	{
		p.print();
	}
	int main()
	{
		Number t1,t2;
		
		t1.scanfun(t1);
		t2.scanfun(t2);
		t1.printfun(t1);
		t1.printfun(t2);
		
		return 0;
	}
