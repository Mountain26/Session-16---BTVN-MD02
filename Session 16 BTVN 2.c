#include <stdio.h>
void swap(int a,int b);
int main(){
	int a=15;
	int b=7;
	printf("Gia tri cua a truoc khi doi la: %d\n", a);
	printf("Gia tri cua b truoc khi doi la: %d\n", b);
	swap(&a,&b);
	printf("Gia tri cua a sau khi doi la: %d\n", a);
	printf("Gia tri cua b sau khi doi la: %d\n", b);
	
	return 0; 
} 
	swap(int *a, int *b){
		int temp= *a;
	  	*a=*b;
	  	*b= temp;
}
