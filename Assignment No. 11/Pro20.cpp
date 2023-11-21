/*

Q18.
class String
{
	private:
		char str[30];
}

int main()
{
	String S1,S2,S3;
	cin>>S1>>S2>>S3;
	String res;
	res = S1 > S2 ? S1 : S2;
	res = res < S3 ? S3 : res;
	cout<<res<<" will go last in dictionary";
}
This program is to be done 2 times.
-operator overloading with member function
-operator overloading with independant function
*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char str[30];
		
	public:
		
	friend istream& operator >>(istream& din,String & p);
	friend ostream& operator <<(ostream& dout,String p);
	
	int operator > (String p)
	{
		if(strcmp(str,&p.str[0])==1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	int operator < (String p)
	{
		if(strcmp(str,&p.str[0])==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
};

istream& operator >>(istream& din,String & p)
{
	cout<<"Enter the string : "<<endl;
	cin.getline(&p.str[0],30);
	
	return din;
}

ostream& operator <<(ostream& dout,String p)
{
	cout<<&p.str[0]<<" ";
	
	return dout;
}


int main()
{
	String S1,S2,S3;
	cin>>S1>>S2>>S3;
	String res;
	res = S1 > S2 ? S1 : S2;
	res = res < S3 ? S3 : res;
	cout<<res<<" will go last in dictionary";
}
