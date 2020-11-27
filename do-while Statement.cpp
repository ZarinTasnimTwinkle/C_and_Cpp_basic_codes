#include <iostream>
using namespace std;
int main()
{
    int i=100,number=10;
    //cin>>number;
    do
    {
        if(i%2==0)
            cout<<i<<endl; /// cout prints even numbers
        i++;
    }while(i<=number);

    return 0;
}
    //run only one time bcz condition is false
