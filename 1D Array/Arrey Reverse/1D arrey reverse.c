#include<stdio.h>
int main()
{
    int x[10], i;
    for(i=0;i<=9;i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}
