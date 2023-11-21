/* Q2.Read each question carefully and complete the code.Do not use friend function in any program given below.
1.
	class Number
	{
		private:
			int x,y;
		public:
			void scan();
			void print();
	//Do not add your own memberfunction.
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
		public:
			void scan();
			void print();
	};
	void Number :: scan()
	{
		cout<<"enter the x and y : "<<endl;
		cin>>x>>y;
	}
	void Number :: print()
	{
		cout<<" x = "<<x<<" y = "<<y;
	}
	int main()
	{
		Number t1,t2;
		
		t1.scan();
		t2.scan();
		t1.print();
		t2.print();
		
		return 0;
	}
