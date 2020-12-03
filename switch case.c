#include<stdio.h>
int main()
{
    int eng, bang, math, chem, phy;
    scanf("%d%d%d%d%d", &bang, &eng, &math, &chem, &phy);
    int avg=(bang+eng+math+chem+phy)/5;

    switch (avg/10){
    case 10:
    case 9:
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("B+");
        break;
    case 5:
        printf("B");
        break;
    case 4:
        printf("C");
        break;
    default:
        printf("Fail");

        }
        return 0;
}

