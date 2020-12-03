#include<stdio.h>
int prime(int a)
{
    int i,flag=0;
    for(i=2;i<a;i++)
    if(a%i==0){
        flag=1;
        break;
    }

    return (flag);
}
int main()
{
    int value;
    scanf("%d", &value);
    if(prime(value)==0)
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}

