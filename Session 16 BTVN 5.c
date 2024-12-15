#include <stdio.h>

void changeItem(int *ptr, int size, int index, int value) {
    *(ptr + index) = value;
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(ptr + i));
    }
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int value;
    int index;
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    printf("Mang ban dau da cho la:\n");
    for(int i = 0; i < size; i++){
        printf("Gia tri thu %d trong mang la: %d\n", i, arr[i]);
    }
    
    printf("\n");
    printf("Moi ban nhap gia tri can them vao: ");
    scanf("%d", &value);
    printf("Moi ban nhap vi tri can cap nhat: ");
    scanf("%d", &index);
    changeItem(arr, size, index, value);

    return 0;
}

