/* Q11.
class Distance
{
	int km,mtr;
	//you can add your own member functions here.
};
Scan 2 distances from user.Convert them in correct distance.
Access members of class using pointer to object only.
*/

#include<iostream>
using namespace std;

class Distance
{
	int km,mtr;
	public:
		
	void scan()
	{
		cout<<"enter the distance : "<<endl;
		cin>>km>>mtr;
	 } 
	 void convert()
	 {
	 	int total = km*1000 + mtr;
	 	
	 	cout<<"Total = "<<total<<endl;
	 }
};

int main()
{
	Distance d1,d2;
	Distance *p = &d1;
	Distance *q = &d2;
	
	p->scan();
	q->scan();
	
	p->convert();
	q->convert();
	
	return 0;
}
