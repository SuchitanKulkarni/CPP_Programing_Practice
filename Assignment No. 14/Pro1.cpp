/*
1.
int main()
{
	int a,b,c;
	a = 5;
	b = 10;
	c = 20;
	int *ptr[3];
}
I above main() function,using ptr array,print values of a,b,c.
Using ptr array print addition of a,b,c.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	a = 5;
	b = 10;
	c = 20;
	int *ptr[3];
	
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	
	cout<<"a = ptr[0] = "<<*ptr[0]<<endl;
	cout<<"b = ptr[1] = "<<*ptr[1]<<endl;
	cout<<"c = ptr[2] = "<<*ptr[2]<<endl;
	
	cout<<"\n Addition = "<<*ptr[0] + *ptr[1] + *ptr[2]<<endl;
	
	return 0;
}
