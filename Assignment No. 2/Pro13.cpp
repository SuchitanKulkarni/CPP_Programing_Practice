/* Q13.Scan 3 integers from user.Print their addition in following main() function.
Do not declare your own variable.
	int main()
	{
		int *p;
	}
*/

#include<iostream>
using namespace std;

int main()
{
	int *p;
	
	p = new int[3];
	cout<<"Enter 3 integers : "<<endl;
	cin>>*(p+0)>>*(p+1)>>*(p+2);
	
	cout<<"ADDITION = "<<*(p+0)+*(p+1)+*(p+2);
	
	return 0;
}
