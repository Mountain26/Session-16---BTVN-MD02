#include <stdio.h>
void printfIndex(int *arr, int size);

int main(){
	
	int arr[]={2,4,6,8};
	int size= sizeof(arr) / sizeof(arr[0]);
	int *ptr;
	ptr = arr; 
	
	printf("Cac phan tu trong mang la:\n");
	printfIndex(arr, size);
	return 0;
}
void printfIndex(int *arr, int size) {
    for (int i = 0; i < size; i++){
		printf("Gia tri cua cac phan tu co trong mang la %d \n", *(arr+i));
    }
}
	
