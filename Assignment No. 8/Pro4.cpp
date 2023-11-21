/* Q4.Complete the code given below.
Do not change main() function.
class Number
{
	private:
		int x,y;
};
int main()
{
	Number T1,T2;
	Number::scan(T1);
	scan(T2);

	print(T2);
	Number::print(T2);
}
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
	public:
		static void scan(Number &p)
		{
			cout<<"enter the x and y : "<<endl;
			cin>>p.x>>p.y;
		}
		static void print(Number p)
		{
			cout<<" x = "<<p.x<<" y = "<<p.y;
		}
		
		friend void scan(Number &p);
		friend void print(Number p);
};

void scan(Number &p)
{
	cout<<"enter the x and y : "<<endl;
	cin>>p.x>>p.y;
}

void print(Number p)
{
	cout<<" x = "<<p.x<<" y = "<<p.y;
}
int main()
{
	Number T1,T2;
	Number::scan(T1);
	scan(T2);

	print(T2);
	Number::print(T2);
}
