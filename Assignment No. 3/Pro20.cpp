/* 20.Write functions to add 2 integers,add 3 integers,add 2 fraction values and add 3 fraction values.
Call these functions from main().Implement function overloading.(perform some experiments to understand the concept better). */

#include<iostream>
using namespace std;


add(int a,int b)
{
	cout<<a+b<<endl;
}
add(int a, int b, int c)
{
	cout<<a+b+c<<endl;
}
add(float a,float b)
{
	cout<<a+b<<endl;
}
add(float a, float b, float c)
{
	cout<<a+b+c<<endl;
}
int main()
{
	add(2,4);
	add(3,4,5);
	add((float)6.8,(float)3.4);
}
