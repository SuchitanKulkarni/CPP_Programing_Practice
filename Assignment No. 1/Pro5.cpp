/* 5.Scan length and width of rectangle from user.Find area and perimeter of rectangle. */

#include<iostream>
using namespace std;

int main()
{
	int len,wid;
	int area,peri;
	
	cout<<"Enter the length and width of rectangle";
	cin>>len>>wid;
	
	area = len*wid;
	peri = 2*(len+wid);
	
	cout<<"\nArea ="<<area;
	cout<<"\nPerimeter = "<<peri;
	
	return 0;
}

