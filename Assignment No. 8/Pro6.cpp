/* Q6.
class Student
{
	private:
		char name[30];
		int age;
	public:
		scan();
		print();
};
//Scan data for array of 4 student objects and print them.
*/

#include<iostream>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
	public:
		void scan();
		void print();
};
void Student :: print()
{
	cout<<name<<" "<<age<<endl;
}
void Student :: scan()
{
	cout<<"enter the name : "<<endl;
	cin.getline(name,30);
	
	cout<<"enter the age : "<<endl;
	cin>>age;
	cin.ignore();
}
int main()
{
	Student obj[4];
	
	int i;
	for(i=0;i<4;i++)
	{
		obj[i].scan();
	}
	for(i=0;i<4;i++)
	{
		obj[i].print();
	}
	
	return 0;
}

