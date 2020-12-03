#include<stdio.h>
int main()
{
    int row,col,r,c;
    printf("Enter the number of row and col: ");
    scanf("%d%d", &row,&col);

    int A[row][col], T[col][row];

    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            scanf("%d", &A[r][c]);
            T[c][r]=A[r][c];
        }
    }
    printf("\n");

    for(r=0;r<col;r++){
        for(c=0;c<row;c++){
            printf("%d ", T[r][c]);
        }
        printf("\n");
    }

    return 0;
}
