/*
7)Number T has 2 private members.x and y.
	int main()
	{
		Number T;
		Digit D;
		T = D.getdata();
		D.print(T);
		return 0;
	}
	*/
	
#include<iostream>
using namespace std;

class Number;

class Digit
{
	public:
		
		Number getdata();
		void print (Number T);
};
class Number
{
	int x,y;
	friend class Digit;
};

Number Digit :: getdata()
{
	Number obj;
	cout<<"Enter the x and y :  "<<endl;
	cin>>obj.x>>obj.y;
	
	return obj;
}
void Digit::print(Number T)
{
	cout<<"x  = "<<T.x<<" y = "<<T.y;
}
int main()
	{
		Number T;
		Digit D;
		T = D.getdata();
		D.print(T);
		return 0;
	}
