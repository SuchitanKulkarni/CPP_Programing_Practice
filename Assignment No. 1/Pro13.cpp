/* 13.Complete the following main() function.
	int main()
	{
		int a = 10;
		int *pa;
	}
-print value of a using pa.
-change value of a to 20 using pa.
-print value of a using pa.
*/

#include<iostream>
using namespace std;

int main()
{
	int a =10;
	int *p = &a;
	cout<<*p<<endl;
	
	*p = 20;
	
	cout<<*p;
	
	return 0;
}
