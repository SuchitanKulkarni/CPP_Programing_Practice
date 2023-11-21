/* 
16.Complete the following main() function.
	int main()	
	{
		int a,b;
	}
-store address of a in pa and address of pa in ppa.
-store address of b in pb and address og pb in ppb.
-scan a using pa.
-scan b using ppb.
-print addition of a and b using ppa and pb.
-check if a is even or odd using ppa.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	int *pa = &a;
	int **ppa = &pa;
	int *pb =&b;
	int **ppb = &pb;
	
	cout<<"Enter the a and b"<<endl;
	cin>>*pa>>**ppb;
	
	cout<<"Addition = "<<**ppa+*pb<<endl;
	
	if(**ppa %2==0)
	{
		cout<<"a is even";
	}
	
	return 0;
}
