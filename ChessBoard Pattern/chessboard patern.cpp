#include<iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    while(1)
    {
      cin>>r>>c;
      if(r==0&&c==0)
        return 0;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if((i+j)%2==0)
                cout<<"#";
            else
                cout<<".";
        }
        cout<<endl;
    }
    cout<<endl;
    }

}
