#include<stdio.h>
int size;
int main()
{
    printf("Enter size of an array: ");
    scanf("%d", &size);

    int i,*p,total=0,marks[size];

    for(i=0;i<size;i++)
        scanf("%d", &marks[i]);
        p=marks;

    while(p<&marks[0]+size){
        total+=*p;
        p++;
    }

    printf("\nTotal score: %d", total);

    return 0;
}
