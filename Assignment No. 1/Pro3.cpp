/* 3.Scan 2 numbers from user.Print their 4 arithmetic results in following format.
If user enters 20 and 10,then result must be

20 + 10 = 30
20 - 10 = 10
20 * 10 = 200
20 / 10 = 2
*/

#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter 2 integers";
	cin>>num1>>num2;
	
    cout<<"\nAddition = "<<num1+num2;
    cout<<"\nSubtraction = "<<num1-num2;
    cout<<"\nMultiplication = "<<num1*num2;
    cout<<"\nDivision = "<<num1/num2;
    
    return 0;
	
	
	
}
