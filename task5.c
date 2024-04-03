#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], sum[size];

    printf("Enter elements of first array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

  
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *ptr_sum = sum;
    for (int i = 0; i < size; i++) {
        *(ptr_sum + i) = *(ptr1 + i) + *(ptr2 + i);
    }

 
    printf("Sum of the arrays: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr_sum + i));
    }
    printf("]\n");

    return 0;
}

