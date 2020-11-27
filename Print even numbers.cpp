#include <iostream>
using namespace std;
int main()
{
    int i,number;
    cin>>number;
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
            cout<<i<<endl; /// cout prints even numbers
    }

    return 0;
}

