/* Q20.WAP to explain references in CPP.Try everything we have seen about references.Rferer notebook.
Must try = References of pointers. */

#include<iostream>
using namespace std;

int main()
{
	int x;
	int *p = &x;
	
	int* &y = p;
	
	cout<<"Enter the values : "<<endl;
	cin>>x;
	cout<<" x = "<<x<<endl;
	*y = 29;
	cout<<" x = "<<*y;
	
	int a ;
	
	y = &a;
	
	*y = 50;
	
	cout<<" *p = "<<*p; 
	
	return 0;
}
