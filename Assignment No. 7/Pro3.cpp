/* 3.WAP to explain references in CPP.*/

#include<iostream>
using namespace std;

class number
{
	public:
		
		int x,y;
		
		void show( )
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
};

void scan(number &p)
{
	cout<<"Enter the x and y :"<<endl;
	cin>>p.x>>p.y;
}

int main()
{
	number t1 , t2;
	
	scan(t1);
	scan(t2);
	t1.show();
	t2.show();
	
	return 0;
}
