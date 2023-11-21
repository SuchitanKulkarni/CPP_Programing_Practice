/* Q18.Scan radius of circle in main().Define functions to find area and circumference of circle.
Print both results in main(). */

#include<iostream>
using namespace std;
int area(int r);
int circum(int r);

int main()
{
	int rad;
	cout<<"Enter the radius : "<<endl;
	cin>>rad;
	
	cout<<"AREA = "<<area(rad);
	cout<<"\nCIRCUMFRERNCE = "<<circum(rad);
	
	return 0;
}
int area(int r)
{
	return(3.14*r*r);
}
int circum(int r)
{
	return(3.14*2*r);
}
