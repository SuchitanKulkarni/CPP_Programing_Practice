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
			void scandata(int,int);
			void printdata();
	};
	
	void Number :: scandata(int a,int b)
	{
		x= a;
		y = b;
	}
	void Number :: printdata()
	{
		cout<<"X = "<<x<<"Y = "<<y;
	}

int main()
{
	Number n1,n2;
	int a,b;
	cout<<"enter the values of x and y :"<<endl;
	cin>>a>>b;
	n1.scandata(a,b);
	
	cout<<"enter the values of x and y :"<<endl;
	cin>>a>>b;
	n2.scandata(a,b);
	
	n1.printdata();
	n2.printdata();
	
	return 0;
}
