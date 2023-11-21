/* Q2. 3)

---- myfun(---- m)
{
	---- ;
	---- ;
}


int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b;  //10  20
	
	a = myfun(&b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
*/

#include<iostream>
using namespace std;

int myfun(int* m)
{
	*m = 30 ;
	return 25 ;
}


int main()
{
	int a = 10;
	int b = 20;
	
	cout<<a<<" "<<b<<endl;  //10  20
	
	a = myfun(&b);
	
	cout<<a<<" "<<b;  //25  30

	return 0;
}
