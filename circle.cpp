#include<iostream>
#include <iomanip>
using namespace std;
int main()
{

	double pi = 3.14159265358979;
	double r;
	cin>>r;
	cout<<fixed<<setprecision(6);
	cout<<pi*r*r<<" "<<2*pi*r<<endl;
	return 0;
}
