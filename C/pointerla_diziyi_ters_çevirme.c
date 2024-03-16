#include <stdio.h>

void swapArray(int *ptr1, int *ptr2) {
    while (ptr1 < ptr2) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        
        ptr1++;
        ptr2--;
    }
}

int main() {
    int size,i;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];
    printf("Dizi elemanlarini girin:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int *start = arr;
    int *end = arr + size - 1;

    swapArray(start, end);

    printf("Yer degistirilmis dizi:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

