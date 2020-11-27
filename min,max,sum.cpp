#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long n,max=-1000000,min=1000000,sum=0;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        sum+=n;
            if(n>max)
                max=n;
            if(n<min)
                min=n;
    }
        cout<<min<<" "<<max<<" "<<sum<<endl;
}
