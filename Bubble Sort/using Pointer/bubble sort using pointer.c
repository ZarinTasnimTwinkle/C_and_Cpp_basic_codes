#include<stdio.h>
void Swap(int *x, int *y)
{
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1])
                Swap(&a[j], &a[j+1]);
        }
    }
}
int main()
{
    int arr[100], size, i,j;

    printf("Enter the total Number of Elements  :  ");
    scanf("%d", &size);

    printf("Enter the Array Elements  :  ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    printf("\n");

    bubbleSort(arr, size);
    printf("Array Sorted in Ascending Order : ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array Sorted in descending Order : ");
    for(i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
