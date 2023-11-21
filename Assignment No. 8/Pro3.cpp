/* Q3.
class Number
{
	private:
		int x,y;
	public:
		static return_type scan(para_list);
		static return_type print(para_list);
		static return_type add(para_list);
}
int main()
{
	//Perform T3 = T1+T2;
}
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		static void scan(Number & p);
		static void print(Number p);
		static void add(Number p,Number q,Number & r);
};
 void Number :: scan(Number &p)
{
	cout<<"enter the x and y : "<<endl;
	cin>>p.x>>p.y;
}
 void Number :: print(Number p)
{
	cout<<" x = "<<p.x<<" y = "<<p.y<<endl;
}
 void Number :: add(Number p,Number q,Number &r)
{
	r.x = p.x + q.x;
	r.y = p.y + q.y;
}
int main()
{
	Number T1,T2,T3;
	
	Number::scan(T1);
	Number::scan(T2);
	Number::add(T1,T2,T3);
	Number::print(T3);
	
	return 0;
	
}

