#include<stdio.h>
int main()
{
    char n,ch;
    int row,col,k;
    scanf("%c", &n);
    k=n%'A';

    for(row=1;row<=k+1;row++){
        ch=n;
        for(col=1;col<=row;col++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
