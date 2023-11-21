/* 2.
	class Number	
	{
		public:
			int x,y;
	};
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		print(T2);
	}
	*/
	
#include<iostream>
using namespace std;

class Number 
{
	public:
		int x,y;
		
};

Number scan()
{
	Number p;
	cout<<"enter the x and y : "<<endl;
	cin>>p.x>>p.y;
	
	return p;
}
void print(Number p)
{
	cout<<" x = "<<p.x<<" y = "<<p.y;
}
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		print(T2);
	}

