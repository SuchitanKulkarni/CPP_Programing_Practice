/* 18.Repeat Q18.Use parameter passing by address.*/

#include<iostream>
using namespace std;

void circle(int r, float *rarea,float *rperi);
int main()
{
	int rad;
	cout<<"Enter the radius : "<<endl;
	cin>>rad;
	float area,peri;
    circle(rad,&area,&peri);
    
    cout<<"Area = "<<area<<endl;
    cout<<"Peri = "<<peri<<endl;
    
    return 0;
}
void circle(int r, float *rarea,float *rperi)
{
	*rarea = 3.14*r*r;
	*rperi = 3.14*2*r;
}
