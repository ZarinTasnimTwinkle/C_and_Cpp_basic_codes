#include<stdio.h>
void prime();
int main()
{
    prime();

    return 0;
}
void prime()
{
    int i,n,flag=1;
    scanf("%d", &n);

    for(i=2;i<=n/2;i++){
        if(n%i==0){
                flag=0;
        break;
        }
    }
    if(flag==1)
            printf("%d is a prime number", n);
        else
            printf("%d is not a prime number", n);
    }
