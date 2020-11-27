#include<stdio.h>
int main()
{
    int n,t,i,zero=0,facto=1;
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        facto*=i;
        n/=5;
        zero+=n;
        i--;
    }
    printf("%d\n%d\n",facto,zero); //print factorial and number of zero
return 0;
}
