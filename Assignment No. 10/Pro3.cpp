/* 3.Add necessary code to run following program successfully.
class Digit
{
	int d;
};
class Number
{
	public:
		Number(int a)
		{
			Digit obj;
			obj.d = 10;
			cout<<obj.d;
		}
};
int main()
{
	Number num;
}
*/

#include<iostream>
using namespace std;


class Number
{
	public:
		Number(int a);
	
};
class Digit
{
	int d;
	friend Number::Number(int a);
};
Number ::Number(int a)
{
	Digit obj;
	obj.d = 10;
	cout<<obj.d;
}
int main()
{
	Number num(1);
}
