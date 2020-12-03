#include<iostream>
using namespace std;
int main()
{
    int num,temp,r,sum=0,c=0,t=0;
    for(num=1; num<=1000; num++)
    {
        temp=num;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(num==sum)
        {
            cout<<"Armstrong num is: "<<num<<endl;
            c++;
        }
        else
        {
            cout<<"Not Armstrong num is: "<<num<<endl;
            t++;
        }
        sum=0;

    }
    cout<<"\nTotal Armstrong number : "<<c<<endl<<"Total Not Armstrong number : "<<t<<endl;
}
