#include <stdio.h>

int main(){
	int a=5;
	int *ptr;
	
	printf("Dia chi cua bien o trong bo nho ram cua may tinh la: %d\n", &a);
	
	ptr=&a;
	
	printf("Dia chi cua bien o trong bo nho ram cua may tinh la: %d\n", &a); 
} 
