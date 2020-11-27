#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    do
    {
    cout<<"1 for addition\n2 for subtraction\n3 for multiplication\n4 for divition\n5 for modulus\n6 for Exit\n\n";
input:
    cin>>n;

        if(n==1)
        {
            cout<<"enter two number ";
            cin>>i>>j;
            cout<<"addition of the given number is= "<<i+j<<endl<<endl;
        }
        else if(n==2)
        {
            cout<<"enter two number ";
            cin>>i>>j;
            cout<<"subtraction of the given number is= "<<i-j<<endl<<endl;
        }
        else if(n==3)
        {
            cout<<"enter two number ";
            cin>>i>>j;
            cout<<"multiplication of the given number is= "<<i*j<<endl<<endl;
        }
        else if(n==4)
        {
            cout<<"enter two number ";
            cin>>i>>j;
            cout<<"divition of the given number is= "<<(float)i/j<<endl<<endl;
        }
        else if(n==5)
        {
            cout<<"enter two number ";
            cin>>i>>j;
            cout<<"modulus of the given number is= "<<i%j<<endl<<endl;
        }
        else if(n==6)
            cout<<"Thank You"<<endl;
        else
        {
            cout<<"Invalid Input"<<endl;
            goto input;
        }
    }
    while(n!=6);



    return 0;
}

