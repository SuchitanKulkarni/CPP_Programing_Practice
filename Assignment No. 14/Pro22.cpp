/*

4.
WAP which will write some data into file and
will read that data immediately from the file.
Use ofstream and ifstream classes only.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path1 [] = "D:\\target.txt";
	
	ofstream fout(path1);
	
	if(fout.fail()==1)
	{
		cout<<"Not connected "<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	fout<<"This ia the program in our cpp language"<<endl;
	fout<<"Now we are going to shift on Ds in upcoming week"<<endl;
	fout<<"in this programming world"<<endl;
	
	
	ifstream fin(path1);
	
	if(fin.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"Connected"<<endl;
	
	char str[100];
	
	while(fin.eof()==0)
	{
		fin.getline(str,100);
	    cout<<str<<endl;
	}
	
	
	return 0;
	
}
