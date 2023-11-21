/* class Number
{
	private:
		int x,y;
	public:
		void scan(para_list);
		void print(para_list);
		void add(para_list);
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
		void scan();
		void print();
		void add(Number p,Number q);
};
void Number :: scan()
{
	cout<<"enter the x and y : "<<endl;
	cin>>x>>y;
}
void Number :: print()
{
	cout<<" x = "<<x<<" y = "<<y<< endl;
}
void Number :: add(Number p, Number q)
{
	x = p.x + q.x;
	y = p.y + q.y;
}
int main()
{
	Number T1,T2,T3;
	
	T1.scan();
	T2.scan();
	T3.add(T1,T2);
	T3.print();
	
	return 0;
	
}
