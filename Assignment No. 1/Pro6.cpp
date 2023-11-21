/* 6.Scan radius of a circle from user.Find area and circumference of circle.*/

#include<iostream>
using namespace std;

int main()
{
	int r;
	cout<<"Enter thge radius of circle";
	cin>>r;
	float area,circum;
	
	area = 3.14*r*r;
	circum = 2*3.14*r;
	
	cout<<"\nArea is = "<<area;
	cout<<"\nCircumference is ="<<circum;
	
	return 0;
	
}
