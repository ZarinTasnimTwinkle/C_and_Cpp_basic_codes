#include<stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j,k,sum=0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter the elements of first matrix\n");

     for (i=0;i<row1;i++)
        for (j=0;j<col1;j++)
            scanf("%d", &first[i][j]);

     printf("Enter the number of rows and columns of second matrix\n");
     scanf("%d%d",&row2,&col2);

     if (col1!=row2)
        printf("Matrices with entered orders can't be multiplied with each other.\n");
     else
        {
            printf("Enter the elements of second matrix\n");
            for (i=0;i<row2;i++)
                for (j=0;j<col2;j++)
                    scanf("%d",&second[i][j]);

     for (i=0;i<row1;i++)
        {
         for (j=0;j<col2;j++)
            {
                for (k=0;k<row2;k++)
                {
                sum = sum + first[i][k]*second[k][j];
                }
                multiply[i][j] = sum;
                sum = 0;
            }
        }
        printf("Product of entered matrices:-\n");
        for (i=0;i<row1;i++)
            {
                for (j=0;j<col2;j++)
                printf("%d ",multiply[i][j]);
                printf("\n");
            }
        }
      return 0;

    }
