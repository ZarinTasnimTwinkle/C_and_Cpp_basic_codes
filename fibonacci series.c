#include<stdio.h>
int main()
{
    int f,i,x=-1,y=1,s;
    scanf("%d",&f);
    for(i=1;i<=f;i++)
    {
        s=x+y;
        x=y;
        y=s;
    }
    printf("%d",y);
}
