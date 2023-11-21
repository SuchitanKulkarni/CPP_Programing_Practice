/* Q7.Read theory of static first.
class Distance
{
	public:
		int km,mtr;
};
Scan 2 distances from user.Convert them in proper distance.
You can add your own member functions but every member function must be static.
input  = 3 km 3210 mtr
output = 6 km  210 mtr
*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km,mtr;
		
		static void scan(Distance & temp)
		{
			cout<<"enter the distance(km,mtr) : "<<endl;
			cin>>temp.km>>temp.mtr;
		}
		
		static void convert(Distance temp)
		{
			temp.km = temp.km + (temp.mtr/1000)%10 ;
			temp.mtr = temp.mtr%1000;
			cout<<temp.km<<" "<<temp.mtr;
		}
};
int main()
{
	Distance T1,T2;
	Distance::scan(T1);
	Distance::convert(T1); 
}
