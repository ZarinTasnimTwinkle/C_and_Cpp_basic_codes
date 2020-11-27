#include <iostream>
using namespace std;

int main()
{
    int i,n,sum,a[100];
    float average;

    for(i=0;i<10;i++)
        cin >>a[i];

    sum=0;
    for(i=0;i<10;i++) {
        sum+=a[i];
    }

    average=(float)sum/10;
    cout <<"Average= "<<average<<endl;

    return 0;
}
