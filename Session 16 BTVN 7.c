#include <stdio.h>


void arrangeItema_z(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }
}


void arrangeItemz_a(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) < *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }
}

int main() {
    int arr[] = {1, 5, 7, 2, 0, 6, 4}; 
    int option;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau da cho la:\n");
    for(int i = 0; i < size; i++) {
        printf("Gia tri thu %d trong mang la: %d\n", i, arr[i]);
    }
    
    printf("\n1. Tang dan\n2. Giam dan\n");
    printf("Moi ban chon yeu cau 1 hoac yeu cau 2: ");
    scanf("%d", &option);
    switch (option) {
    case 1:
        arrangeItema_z(arr, size);
        break;
    case 2:
        arrangeItemz_a(arr, size);
        break;
    default:
        printf("Lua chon khong hop le\n");
        break;
    }

    return 0;
}

