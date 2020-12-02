#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d", &n);

    int x[n];
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);

        sum=sum+(x[i]*x[i]);
           //square kre jog krbe..
    }
    printf("square's sum is : %d\n", sum);

    return 0;
}
