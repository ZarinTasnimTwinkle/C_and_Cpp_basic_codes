#include<stdio.h>
int main()
{
    int visit,i,n;
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        visit=a[i];
        printf("%d ", visit);
    }
    return 0;
}
