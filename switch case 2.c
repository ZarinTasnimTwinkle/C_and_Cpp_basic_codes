#include<stdio.h>
int main()
{
    int eng, bang, math, chem, phy;
    float avg;
    scanf("%d%d%d%d%d", &bang, &eng, &math, &chem, &phy);
    avg=(bang+eng+math+chem+phy)/(float)5;

    printf("Average number:%f\n", avg);
    avg=avg/10;

    switch ((int)avg){
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


