#include<iostream>
using namespace std;

double simpleinterest()
{
	float r,n;
	double s,p;
	cout<<"Enter Principle:";
	cin>>p;
	cout<<"Enter Rate of Interest:";
	cin>>r;
	cout<<"Enter Number of years:";
	cin>>n;
	s=(p*r*n)/100;
	return s;
	
}


void display(double s)
{
	cout<<"The Simple Interest is: "<<s<<"\n";
}


int main()
{
	double interest;
	interest=simpleinterest();
	display(interest);
}
