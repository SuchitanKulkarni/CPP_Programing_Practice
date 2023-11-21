/* Q16.WAP to explain static variable. */

#include<iostream>
using namespace std;
void myfun();
int main()
{
	myfun();
	myfun();
	myfun();
	
	return 0;
}
void myfun()
{
    static int x = 10;
    x++;
    cout<<x<<endl;
}

