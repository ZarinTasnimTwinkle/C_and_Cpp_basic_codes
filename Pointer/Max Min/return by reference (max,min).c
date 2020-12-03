#include<stdio.h>
int *MAXIMUM(int *p, int *q)
{
    if(*p > *q)
        return (p);
    else
        return (q);
}
int main()
{
    int m1,m2, *max;
    scanf("%d %d", &m1,&m2);
    max=MAXIMUM(&m1, &m2);
    printf("max=%d", *max);

    return 0;
}
