#include<stdio.h>
#include<string.h>
int main()
{
    char student[200][40], temp[40];
    int i,j,n;
    printf("Number of Student: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%s",student[i]);

        for(i=0;i<n;i++)
            printf("\nstudent name-%d: %s",i+1,student[i]);

    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(strcmp(student[j],student[j+1])>0){
                strcpy(temp,student[j]);
                strcpy(student[j],student[j+1]);
                strcpy(student[j+1],temp);
            }
        }
    }
    printf("\n");

    for(i=0;i<n;i++)
        printf("\n%d.%s",i+1,student[i]);
        printf("\n");

    return 0;
}
