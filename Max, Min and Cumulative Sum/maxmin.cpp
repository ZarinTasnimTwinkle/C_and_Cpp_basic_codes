#include<iostream>
using namespace std;
int main()
{
    int n, i, maxi, mini;
    cout <<"Enter the size of the array: ";
    cin >>n;
    cout <<"Enter the elements of the array: ";
    int a[n],sum[n];
    for (i=0;i<n;i++)
        cin >>a[i];

    mini=maxi=sum[0]=a[0];
    //sum[0]=a[0];

    for (i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        sum[i]=a[i];
        sum[i]+=sum[i-1];

    }

    cout <<"Maximum number: " <<maxi<<endl;
    cout <<"Mimimum number: " <<mini<<endl;
    cout <<"Cumulative sum: ";
    for (i=0;i<n;i++)
            cout<<sum[i]<<" ";
            cout<<endl;


}
