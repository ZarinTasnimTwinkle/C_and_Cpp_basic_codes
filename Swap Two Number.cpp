#include<iostream>
using namespace std;
int main()
{
	int a,b,*temp,*x,*y;
	cout<<"Enter value of a and b: ";
	cin>>a>>b;
	x=&a;
	y=&b;

	temp=x;
	x=y;
	y=temp;
	cout<<"After swaping= "<<b<<" "<<a<<endl;

}
