#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    printf("Enter the total Number of Elements  :  ");
    scanf("%d", &n);

    printf("Enter the Array Elements  :  ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    i=0;
    while(i<n-1) {
        j=0;
        while(j<n-i-1) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    printf("List Sorted in Ascending Order : ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("List Sorted in descending Order : ");
    for(i=n-1; i>=0; i--)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
