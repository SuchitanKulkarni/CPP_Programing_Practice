/* Q15.
	class Number
	{
		public:
			int x,y;
			void scandata();
			void printdata();
	}

Scan and print details of 2 objects of class Number.Do not access x and y in non member functions.
*/

#include<iostream>
using namespace std;

class Number
	{
		public:
			int x,y;
			void scandata();
			void printdata();
	};
	
	void Number :: scandata()
	{
		cout<<"enter the x and y :"<<endl;
		cin>>x>>y;
	}
	
	void Number :: printdata()
	{
		cout<<" x = "<<x<<" y = "<<y;
	}
	
	int main()
	{
		Number n1,n2;
		n1.scandata();
		n2.scandata();
		n1.printdata();
		n2.printdata();
		
		return 0;
	}
