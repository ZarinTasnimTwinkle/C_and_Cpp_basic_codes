#include<stdio.h>
int main()
{
    int item[]={70,53,80,1,-9,42,3,7,5};
    int loc=-1,i,search;

    printf("Enter search value: ");
    scanf("%d", &search);

    for(i=0;loc==-1 && i<9;i++){
        if(search==item[i])
            loc=i+1;
    }
    if(loc!=-1)
        printf("\n location of the %d item is %d\n", search,loc);
    else
        printf("\n item not in list...\n");

    return 0;
}
