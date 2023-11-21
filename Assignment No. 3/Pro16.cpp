/* 16.Repeat question 15.Use parameter passing by address. */

#include<iostream>
using namespace std;
void rectangle(int i,int w,int *rarea,int *rperi);
int main()
{
	int len,wid;
	cout<<"Enter the length and width : "<<endl;
	cin>>len>>wid;
	int area,peri;
	rectangle(len,wid,&area,&peri);
	
	cout<<"Area = "<<area;
	cout<<"peri = "<<peri;
	
	return 0;
	
}
void rectangle(int i,int w,int *rarea,int *rperi)
{
	*rarea = i*w;
	*rperi = 2*(i+w);
}

