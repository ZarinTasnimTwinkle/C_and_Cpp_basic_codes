#include<stdio.h>
int main()
{
    int n,i,f1=-1,f2=1,f3,s=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        s=s+f3;
        printf("%d ",f2);
    }
    printf("\nsum=%d\n",s);

    return 0;
}
