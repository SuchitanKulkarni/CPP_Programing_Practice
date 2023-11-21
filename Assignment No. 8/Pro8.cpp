/* Q9.
class Student
{
	public:		
		int age;
		int weight;
};
Create an array of 6 students.Sort array in ascending order by age.
*/

#include<iostream>
using namespace std;

class Student
{
	public:		
		int age;
		int weight;
		void scan()
		{
			cout<<" enter age and weight : "<<endl;
			cin>>age>>weight;
		}
		
		void print()
		{
			cout<<"Age = "<<age<<" weight = "<<weight;
		}
};

int main()
{
	Student obj[6];
	
	int i,j;
	Student temp;
	for(i=0;i<6;i++)
	{
		obj[i].scan();
	}
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(obj[i].age>obj[j].age)
			{
				temp = obj[i];
				obj[i] = obj[j];
				obj[j] = temp;
			}
		}
	}
	
	for(i=0;i<6;i++)
	{
		obj[i].print();
	}
}
