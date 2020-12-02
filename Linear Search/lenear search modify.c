#include<stdio.h>
int main()
{
    int item[]={10,10,30,30,5,30,5,60,1,50,60,50,5,10,30};
    int loc,i,search,count=0;

    printf("Input search value: ");
    scanf("%d", &search);
    printf("location of %d: ", search);

    for(i=0;i<15;i++){
        if(search==item[i]){
            loc=i+1;
            count++;
            printf("%d ", loc);
        }
    }
    printf("\n Total: %d\n", count);

    return 0;
}
