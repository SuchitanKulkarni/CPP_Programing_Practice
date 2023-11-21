/*
2.
int main()
{
	float a,b,c;
}
In above main() function,using array of pointers ptr,
scan values of a,b,c and print their addition.

*/

#include<iostream>
using namespace std;

int main()
{
	float a,b,c;
	
	float * ptr[3];
	
	int i;
	
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	
	cout<<"Enter the a (float)): "<<endl;
	cin>>*ptr[0];
	
	cout<<"Enter the b (float)) : "<<endl;
	cin>>*ptr[1];
	
	cout<<"Enter the c (float)) : "<<endl;
	cin>>*ptr[2];
	
	float l = 0.00;
	
	for(i=0;i<3;i++)
	{
		l = l + *ptr[i];
	}
	
	cout<<"\n Addition = "<<l;
	
	return 0;
}


