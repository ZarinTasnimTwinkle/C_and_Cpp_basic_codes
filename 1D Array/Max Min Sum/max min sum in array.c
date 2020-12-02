#include<stdio.h>
int main()
{
    int i,size;
    float maxh, minh, sumh;
    printf("Enter no. of persons: ");
    scanf("%d", &size);

    float height[size];
    for(i=0;i<size;i++){
        scanf("%f", &height[i]);
    }
    maxh=height[0];
    for(i=1;i<size;i++){
        if(maxh<height[i])
            maxh=height[i];
    }
    printf("\n maximum height: %.2f", maxh);

    minh=height[0];
    for(i=1;i<size;i++){
        if(minh>height[i])
            minh=height[i];
    }
    printf("\n minimum height: %.2f", minh);

    sumh=height[0];
    for(i=1;i<size;i++){
        sumh+=height[i];
    }
    printf("\n Sum of height: %.2f", sumh);

    return 0;
}
