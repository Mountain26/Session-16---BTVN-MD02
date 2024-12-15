#include <stdio.h>


void addItem(int valueItem, int index, int *size, int *arr) {
    for (int i = *size; i > index; i--) {
        *(arr + i) = *(arr + i - 1);
    }
    *(arr + index) = valueItem;
    (*size)++;
    printf("Mang sau khi da chen la: \n");
    for (int i = 0; i < *size; i++) {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

int main(){
    int arr[100] = {1, 6, 1, 4, 5, 7, 9};
    int size = 7;
    int valueItem;
    int index;
    
    printf("Mang ban dau da cho la:\n");
    for(int i = 0; i < size; i++) {
        printf("Gia tri thu %d trong mang la: %d\n", i, arr[i]);
    }
    
    printf("Moi ban nhap gia tri muon chen: ");
    scanf("%d", &valueItem);
    printf("Moi ban nhap vi tri muon chen: ");
    scanf("%d", &index);
    addItem(valueItem, index, &size, arr);

    return 0;
}

