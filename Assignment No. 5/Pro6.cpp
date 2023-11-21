/* Q6.Scan length and width of rectangle from user.Define function rectangle() to find area and
perimeter of rectangle.Print both results in main().(use pass by address) */

#include<iostream>
using namespace std;

void rectangle(int l, int w ,int *area, int *peri);

int main()
{
	int len,wid;
	
	cout<<"enter the length and width : "<<endl;
	cin>>len>>wid;
	
	int area , peri;
	
	rectangle(len,wid,&area,&peri);
	
	cout<<"area = "<<area<<endl;
	cout<<"perimeter = "<<peri;
	
	return 0;
}

void rectangle(int l, int w, int *area,int * peri)
{
	*area = l*w;
	*peri = 2*(l+w);
}

