#include<stdio.h>
int main()
{
    int total_mark=0,n,i;
    scanf("%d", &n);
    int marks[n];

    for(i=0;i<n;i++){
        scanf("%d", &marks[i]);
        total_mark+=marks[i];
    }
    printf("%d", total_mark);

    return 0;
}
