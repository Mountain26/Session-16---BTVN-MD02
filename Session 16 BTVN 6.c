#include <stdio.h>


int linearSearch(int *arr, int size, int valueItem, int *flag) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == valueItem) {
            *flag = 1;
            printf("Phan tu %d nam o vi tri %d\n", valueItem, i);
            return 0;
        }
    }
    if (*flag == -1){
        printf("Phan tu %d khong ton tai trong mang\n", valueItem);
    }
    return -1;
}

int main() {
    int arr[] = {1, 5, 7, 2, 0, 6}; 
    int valueItem;
    int flag = -1;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Moi ban nhap vao gia tri can tim o trong mang:\n");
    scanf("%d", &valueItem);
    linearSearch(arr, size, valueItem, &flag);
    return 0;
}

