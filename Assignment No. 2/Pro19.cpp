/* 
Q19.Scan length and width of a rectangle.Find its area and perimeter in functions.Print
both results in main().(use pass by value parameter passing) */

#include<iostream>
using namespace std;
int area(int l,int w);
int peri(int l,int w);
int main()
{
    int len,wid;
	cout<<"Enter the length and width : "<<endl;
	cin>>len>>wid;
	
	cout<<"AREA = "<<area(len,wid)<<endl;
	cout<<"PERIMETER = "<<peri(len,wid)<<endl;
	
	return 0;	
}
int area(int l,int w)
{
	return(l*w);
}
int peri(int l,int w)
{
	return(2*(l+w));
}
