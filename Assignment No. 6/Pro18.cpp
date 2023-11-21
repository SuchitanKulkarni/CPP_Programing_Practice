/*
2)Complete the code for following.Do not change access specifier of any member.
You can add parameters to function if necessary.Do not add any extra function.
	class Number
	{
		private:
			int n;
	};
	
	class Digit
	{
		public:
			void scan(parameters);
			void print(parameters);
	};
	int main()
	{
		Number Tn;
		Digit D;
		//scan data of Tn using scan() of digit.
		//print data of Tn using print() of Digit.	
	}
	*/
	
#include<iostream>
using namespace std;

	class Number
	{
		private:
			int n;
			
		friend class Digit;
	};
	
	class Digit
	{
		public:
			void scan(Number &t);
			void print(Number t);
	};
	
	void Digit :: scan(Number & t)
	{
		
		cout<<"Enter the value n : "<<endl;
		cin>>t.n;
		
	}
	
	void Digit :: print(Number t)
	{
		Number obj;
		cout<<" n = "<<t.n;
	}
	int main()
	{
		Number Tn;
		Digit D;	
		
		D.scan(Tn);
		D.print(Tn);
		
		return 0;
	}
