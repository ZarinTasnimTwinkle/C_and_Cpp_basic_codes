#include<stdio.h>
int main()
{
    int m, n, i, sum=1;
    printf("Enter any value:");
    scanf("%d", &n);

    m=n;
    for(i=n;i>=1;i--){
        sum=sum*i;
    }
    printf("\n %d! = %d", m,sum);

    return 0;
}
