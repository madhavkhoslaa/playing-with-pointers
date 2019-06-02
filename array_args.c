#include <stdio.h>

void size(int a[]);

void main(){
	int a[5]= {1, 2, 3, 4, 5};
	int main_size = sizeof(a)/sizeof(a[0]);
	printf("Size in main %d \n", main_size);
	size(a);
}

void size(int a[]){
	int size_ = sizeof(a)/sizeof(a[0]);
	printf("Size in function %d", size_);
}
