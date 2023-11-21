/* Q5.Scan radius from user in main().Define function circle() to find area and circumference of circle.
Print both results in main().(use pass by reference) */

#include<iostream>
using namespace std;

void circle(int r,float &rarea,float &rcircum);

int main()
{
	int rad;
	
	cout<<"enter the radius : "<<endl;
	cin>>rad;
	
	float area,circum;
	
	circle(rad,area,circum);
	
	cout<<" area = "<<area;
	cout<<"\n\n ciircumference = "<<circum;
	
	return 0;
}

void circle(int r,float &rarea,float &rcircum)
{
	rarea = 3.14*r*r;
	
	rcircum = 3.14*2*r;
}

