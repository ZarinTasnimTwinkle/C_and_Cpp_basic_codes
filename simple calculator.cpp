#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
        while(1)
        {
            cin>>a>>c>>b;
            if(c=='?')
                return 0;
    if(c=='+')
        cout<<a+b<<endl;
    else if(c=='-')
        cout<<a-b<<endl;
    else if(c=='*')
       cout<<a*b<<endl;
    else if(c=='/')
        cout<<a/b<<endl;
        }
return 0;
}


