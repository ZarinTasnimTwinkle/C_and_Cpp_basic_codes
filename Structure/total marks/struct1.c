#include<stdio.h>
struct number{
int sub1,sub2,sub3,total,roll;
};
int main()
{
    int n,i,temp;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    struct number s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter roll: ");
        scanf("%d",&s[i].roll);
            printf("Enter student marks: ");
            scanf("%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
        s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j].total<s[j+1].total)
            {
                temp=s[j].total;
                s[j].total=s[j+1].total;
                s[j+1].total=temp;
                temp=s[j].roll;
                s[j].roll=s[j+1].roll;
                s[j+1].roll=temp;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("roll %d merit position %d total %d\n",s[j].roll,j+1,s[j].total);
    }

    return 0;
}
