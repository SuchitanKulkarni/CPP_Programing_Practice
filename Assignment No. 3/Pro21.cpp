/* Q2. 1)
void myfun(---- m,---- n)
{
	---- ;
	---- ;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b;  //10  20
	
	myfun(----,----);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
*/

#include<iostream>
using namespace std;

void myfun(int &m,int &n)
{
	m = 25;
	n = 30;
}

int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b<<endl;  //10  20
	
	myfun(a,b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}

