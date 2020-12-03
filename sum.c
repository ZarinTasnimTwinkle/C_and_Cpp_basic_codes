#include<stdio.h>
int main()
{
    int n=0, x, m, sum=0;
    scanf("%d%d", &x, &m);

    while(n<=m){
        sum+=pow(x,n);
        n++;
    }
    printf("Summation:%d", sum);

    return 0;
}
