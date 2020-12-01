#include<stdio.h>
int main()
{
    int i, a[3], b[3], C[3], D[3];

    for(i=0;i<=2;i++)
        scanf("%d", &a[i]);
    for(i=0;i<=2;i++)
        scanf("%d", &b[i]);
        printf("\n");
    for(i=0;i<=2;i++)
    {
        C[i]=a[i]+b[i];
        printf("C=%d ", C[i]);
    }
    printf("\n");

    for(i=0;i<=2;i++)
    {
        D[i]=a[i]-b[i];
        printf("D=%d ", D[i]);
    }
    printf("\n");

    return 0;
}
