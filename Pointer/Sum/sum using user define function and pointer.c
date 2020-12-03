#include<stdio.h>
int size;
void sum(int *p, int *sum)
{

    int *q=p;
    while(p<q+size){
        *sum+=*p;
        p++;
    }
}
int main()
{
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int i,*p,total=0,marks[size];
    for(i=0;i<size;i++)
        scanf("%d", &marks[i]);
    sum(marks,&total);

    printf("\nTotal score: %d", total);

    return 0;
}
