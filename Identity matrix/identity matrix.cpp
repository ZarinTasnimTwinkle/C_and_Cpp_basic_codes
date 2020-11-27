#include<iostream>
using namespace std;
int main()
{
    int m,i,j;
    cin>>m;

    for (i=1; i<=m; i++)
        {
        for (j=1; j<=m; j++)
        {
            if(i==j)
                cout<<"1";
            else
                cout<<"0";
        }
    cout<<endl;
        }
return 0;
}
