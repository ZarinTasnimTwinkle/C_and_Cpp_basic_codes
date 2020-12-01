#include<stdio.h>
int main()
{
    int A[2][3], B[2][3], C[2][3], i,j;

    printf("A =\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++)
            scanf("%d", &A[i][j]);
    }
    printf("\nB =\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++)
            scanf("%d", &B[i][j]);
    }

    printf("\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
                 C[i][j]=A[i][j]+B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
