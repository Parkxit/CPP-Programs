#include<iostream>
using namespace std;


void add(float n1,float n2)
{
	cout<<"\nThe addition of "<<n1<<" and "<<n2<<" is "<<n1+n2;
}

void sub(float n1,float n2)
{
	cout<<"\nThe difference of "<<n1<<" and "<<n2<<" is "<<n1-n2;
}

void mul(float n1,float n2)
{
	cout<<"\nThe product of "<<n1<<" and "<<n2<<" is "<<n1*n2;
}

void div(float n1,float n2)
{
	cout<<"\nThe division of "<<n1<<" and "<<n2<<" is "<<n1/n2;
}

int main()
{
	float n1,n2;
	int ch;
		cout<<"\nEnter first number:";
	cin>>n1;
	cout<<"Enter second number:";
	cin>>n2;
	do{
	cout<<"\n\n1)Add the nos.\n2)Substract the nos.\n3)Multiply the nos.\n4)Divide the nos.\n5)Exit\n";
	cin>>ch;

	switch(ch)
	{
	
		case 1:
			add(n1,n2);
			break;
		
		case 2:
			sub(n1,n2);
			break;
			
		case 3:
			mul(n1,n2);
			break;
			
		case 4:
			div(n1,n2);
			break;
			
		case 5:
			cout<<"ok";
			break;
			
		default:
			cout<<"Enter valid option.";
	}
}while(ch!=5);
}
