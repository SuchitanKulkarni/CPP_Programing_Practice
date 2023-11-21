/*
9)Scan the data for 2 objects of class Number.Perform their addition in third object using add() function.
You can add one more function in class.Do not call add() from scan or print.
class Number
{
	private:
		int x,y;
		---- add(----);
	public:
		void scan();
		static void print();
};
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
		Number add(Number p,Number q);
	public:
		void scan();
		static void print(Number obj);
		
		friend int main();
};
 void Number :: scan()
 {
 	cout<<"Enter the x and y : "<<endl;
 	cin>>x>>y;
 }
 void Number :: print(Number obj)
 {
 	cout<<" x = "<<obj.x<<" y = "<<obj.y<<endl;
 }
 
 Number Number::add(Number p, Number q)
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
 	
 	T1.print(T1);
 	T1.print(T2);
 	T1.print(T3);
 	
 	return 0;
 }
