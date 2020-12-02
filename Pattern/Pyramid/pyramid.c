#include<stdio.h>
int main()
{
    int r, sp, p, no, n;
    printf("Enter the number of rows:");
    scanf("%d", &no);
    n=no;

    for(r=1; r<=no; r++){
        for(sp=1; sp<=n; sp++)
            {
            printf(" ");
            }
        n--;

            for(p=1; p<=r; p++)
                {
                printf(" * ");
                }
            printf("\n");
    }

    return 0;




}
