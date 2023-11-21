/* Q5.Scan radius from user in main().Define function circle() to find area and circumference of circle.
Print both results in main().(use pass by reference)
*/

#include<iostream>
using namespace std;

void circle (int r,float & area,float & circum);

int main()
{
	int rad;
	float area,circum;
	cout<<"Enter the radius : "<<endl;
	cin>>rad;
	
	circle(rad,area,circum);
	
	cout<<"Area = "<<area;
	cout<<"circumference = "<<circum;
	
	return 0;
}

void circle (int r,float &rarea,float &rcircum)
{
    rarea = 3.14*r*r;
    rcircum = 3.14*2*r;
}
