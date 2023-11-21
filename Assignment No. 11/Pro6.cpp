/*
Q6.Complete the code for following main() function.
class Distance
{
	int inch,feet;
};
int main()
{
	Distance D1,D2;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();
}
*/

#include<iostream>
using namespace std;

class Distance
{
	int inch,feet;
	
	friend void scan(Distance & p);
	
	public:
		
		void scan()
		{
			cout<<"Enter the the feet and inch : "<<endl;
			cin>>feet>>inch;
		}
		
		void 
};
void scan(Distance & p)
{
	cout<<"Enter the feet and inch : "<<endl;
	cin>>p.feet>>p.inch;
}
int main()
{
	Distance D1,D2;
	scan(D1);
	D2.scan();
	~D1;
	~D2;
	//~ operator is used here to convert distance in proper format
	//e.g. input = 3 feet 27 inch
	//output = 5 feet 3 inches
	D3 = D1 + D2;
	~D3;
	D3.show();
}
