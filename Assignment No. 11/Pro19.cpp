/*Q17.
class Number
{
	private:
		int x,y;
}
int main()
{
	Number T1,T2,T3,T4;
	cin>>T1>>T2;
	T3 = T1 * T2;
	cout<<"\nMultiplication = "<<T3;
	T4 = T3 - T1;
	cout<<"\nT4 = "<<T4;
	T4 = -T1 + T2 * T3;
	cout<<"\nT4 = "<<T4;
	cout<<"\n-T1 = "<<-T1;
}

*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		
	public:
		
		Number operator * (Number p)
		{
			Number ans;
			
			ans.x = x * p.x;
			ans.y = y * p.y;
			
			return ans;
		}
		
		Number operator - (Number p)
		{
			Number ans;
			
			ans.x = x - p.x;
			ans.y = y - p.y;
			
			return ans;
		}
		
		Number operator - ()
		{
			Number ans;
			
			ans.x = - x ;
			ans.y = - y ;
			
			return ans;
		}
		
		Number operator + (Number p)
		{
			Number ans;
			
			ans.x = x + p.x;
			ans.y = y + p.y;
			
			return ans;
		}
		friend ostream & operator <<( ostream & dout , Number  p);
		friend istream & operator >> (istream & din, Number & p);
};
 ostream& operator <<(ostream& dout , Number  p)
{
	cout<<p.x<<" "<<p.y<<endl;
	
	return dout;
}
istream& operator >> (istream& din, Number & p)
{
	cout<<"ENter the x and y : "<<endl;
	cin>>p.x>>p.y;
	
	return din;
}
int main()
{
	Number T1,T2,T3,T4;
	cin>>T1>>T2;
	T3 = T1 * T2;
	cout<<"\nMultiplication = "<<T3;
	T4 = T3 - T1;
	cout<<"\nT4 = "<<T4;
	T4 = -T1 + T2 * T3;
	cout<<"\nT4 = "<<T4;
	cout<<"\n-T1 = "<<-T1;
}
