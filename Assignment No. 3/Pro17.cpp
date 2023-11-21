/* 17.Scan radius of circle from user in main().Define function circle() to find area and circumference of circle.
Use parameter passing by reference. */

#include<iostream>
using namespace std;
void circle(int r, float &rarea,float &rperi);
int main()
{
	int rad;
	cout<<"Enter the radius : "<<endl;
	cin>>rad;
	float area,peri;
    circle(rad,area,peri);
    
    cout<<"Area = "<<area<<endl;
    cout<<"Peri = "<<peri<<endl;
    
    return 0;
}
void circle(int r, float &rarea,float &rperi)
{
	rarea = 3.14*r*r;
	rperi = 3.14*2*r;
}
