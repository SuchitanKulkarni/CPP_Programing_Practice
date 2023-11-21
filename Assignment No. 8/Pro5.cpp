/* Q5.
class Student
{
	private:
		char name[30];
		int age;
	public:
		scan();
		print();
};
//Scan data for 3 students and print them.
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
void Student :: scan()
{
	cout<<"enter the name : "<<endl;
	cin.getline(name,30);
	
	cout<<"enter the age : "<<endl;
	cin>>age;
	cin.ignore();
}
void Student :: print()
{
	cout<<name<<" "<<age<<endl;
}

int main()
{
	Student S1,S2,S3;
	S1.scan();
	S2.scan();
	S3.scan();
	
	S1.print();
	S2.print();
	S3.print();
	
	return 0;
}
