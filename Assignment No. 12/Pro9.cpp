/*
9.
WAP to check working of Diamond problem.Solve this problem using membership identity label.
*/

#include<iostream>
using namespace std;

class Grand
{
	public:
		
		void show()
		{
			cout<<"in Grand"<<endl;
		}
};

class Parent1 : public Grand
{
};

class Parent2 : public Grand
{
};

class Child : public Parent1 , public Parent2
{
	
};

int main()
{
	Child obj;
	cout<<"int parent1"<<endl;
	obj.Parent1 :: show();
	cout<<"int parent2"<<endl;
	obj.Parent2 :: show();
	
	return 0;
}


