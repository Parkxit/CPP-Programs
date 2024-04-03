#include<iostream>
using namespace std;

double square(double n)
{
	double s=n*n;
	return s;
	
}

int main()
{
	double sq;
	double n;
	cout<<"Enter number: ";
	cin>>n;
	sq=square(n);
	cout<<"The square of "<<n<<" is "<<sq;
}
