#include <stdio.h>

void deleteItem(int *arr, int *size, int index) {
    for (int i = index; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    (*size)--;
    printf("Mang sau khi da xoa la: \n");
    for (int i = 0; i < *size; i++) {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 6, 1, 4, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;
    
    printf("Mang ban dau da cho la:\n");
    for (int i = 0; i < size; i++) {
        printf("Gia tri thu %d trong mang la: %d\n", i, arr[i]);
    }
    
    printf("Moi ban nhap vi tri can xoa: ");
    scanf("%d", &index);
    deleteItem(arr, &size, index);

    return 0;
}

