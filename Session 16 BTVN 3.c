#include <stdio.h>
void sum(int *a,int *b, int *total);
int main(){
	int a=15;
	int b=7;
	int total=0; 
	printf("Gia tri cua a la: %d\n", a);
	printf("Gia tri cua b la: %d\n", b);
	sum(&a,&b,&total);
	printf("Tong cua a va b la: %d\n", total);
	
	
	return 0; 
} 
	void sum(int *a, int *b, int *total){
		*total= *a + *b; 
}
