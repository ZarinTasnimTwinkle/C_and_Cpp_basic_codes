#include<stdio.h>
void MAXIMUM(int *p, int *q, int *mx, int *mn)
{
    if(*p > *q){
        *mx=*p;
        *mn=*q;
    }
    else
    {
        *mx=*q;
        *mn=*p;
    }
}
int main()
{
    int m1,m2,max,min;
    scanf("%d %d", &m1, &m2);
    MAXIMUM(&m1,&m2,&max,&min);
    printf("max=%d, min=%d", max, min);

    return 0;
}
