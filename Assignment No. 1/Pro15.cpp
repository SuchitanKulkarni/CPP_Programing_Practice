/* 
15.Complete the following main() function.
	int main()
	{
		float x,y;
	}
-store address of x in px and address of y in py.
-scan x and y using px and py
-print addition of x and y using px and py
*/

#include<iostream>
using namespace std;

int main()
{
	float x,y;
	float *px,*py;
	px = &x;
	py = &y;
	
	cout<<"ENter the values for x and y"<<endl;
	cin>>*px>>*py;
	cout<<"x = "<<*px<<" "<<"y = "<<*py;
}
