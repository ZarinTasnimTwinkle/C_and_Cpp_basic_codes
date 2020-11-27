#include <iostream>
using namespace std;
int main()
{
  int t;
  long long a,b,n,d,r,gcd,lcm;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lli %lli",&a,&b);
    if(a>b)
    {
      n=a;
      d=b;
    }
    else
    {
      d=a;
      n=b;
    }
    r=n%d;
    while(r!=0)
    {
      n=d;
      d=r;
      r=n%d;
    }
    gcd=d;
    lcm=(a*b)/gcd;
    printf("GCD = %lli  LCD = %lli\n",gcd,lcm);
  }
  return 0;
}
