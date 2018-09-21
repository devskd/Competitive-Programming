/* Program to check whether a a user given number is present after 
the decimal place of the result getting after dividing(/) 1 by the 
number provided by the user.*/ 
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
	double n;
	cin>>n;
	
	double s=(1/n);
	stringstream ss1;
	ss1 << s;
	string str1 = ss1.str();
	cout<<str1<<endl;
	
	stringstream ss2;
	ss2 << n;
	string str2 = ss2.str();
	cout<<str2<<endl;
	
	if(strstr(str1.c_str(),str2.c_str()))
	
		cout <<"Yes";
	else
		cout<<"No";
	return 0;
}
