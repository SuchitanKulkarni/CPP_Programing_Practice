/* 2.
	class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	//Do not add your own memberfunction.
	}
	int main()
	{
		//Scan and print data for 2 objects.
	*/
	
	
#include<iostream>
using namespace std;

class Number
	{
		private:
			int x,y;
			void scan();
		public:
			void print();
	};
	
	void Number :: scan()
	{
		cout<<"\n enter the x and y : "<<endl;
		cin>>x>>y;
	}
	void Number :: print()
	{
		scan();
		cout<<" x = "<<x<<" y = "<<y;
	}
	int main()
	{
		Number t1,t2;
		
		t1.print();
		t2.print();
		
		return 0;
    }
