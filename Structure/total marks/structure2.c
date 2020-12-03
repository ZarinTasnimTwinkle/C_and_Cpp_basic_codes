#include<stdio.h>
#define max 2
typedef struct
{
    char name[50];
    int roll[10];
    int sub[max];
    int total;
}exam;

int main()
{
    int size,i,j;
    printf("how many student? ",i+1);
    scanf("%d", &size);
    exam s[size];
    for(i=0;i<size;i++){
        printf("\nEnter student-%d roll ",i+1);
        scanf("%d",&s[i].roll);
        printf("\nEnter student-%d name ",i+1);
        scanf("%s",&s[i].name);
        printf("\nEnter student-%d sub marks: ",i+1);
        s[i].total=0;
        printf("\n");
        for(j=0;j<max;j++){
            printf("Enter sub-%d mark ",j+1);
            scanf("%d",&s[i].sub[j]);
            s[i].total+=s[i].sub[j];
        }
    }
    for(i=0;i<size;i++)
        printf("\nStudent%d achieved total marks: %d",i+1,s[i].total);

    return 0;
}
