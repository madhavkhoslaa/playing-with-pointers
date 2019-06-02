#include <stdio.h>

void size(int a[]);
void double_(int a[], int size);
void main(){
	int a[5]= {1, 2, 3, 4, 5};
	int main_size = sizeof(a)/sizeof(a[0]);
	printf("Size in main %d \n", main_size);
	size(a);
	double_(a, main_size);
	for(int i=0; i<=5-1;i++)
	printf(" ARRAY VAL%d", a[i]);
}


void size(int a[]){
	int size_ = sizeof(a)/sizeof(a[0]);
	printf("Size in function %d", size_);
}

void double_(int a[], int size){
	for(int i=0; i<size; i++){
		a[i] = 2*a[i];
	}

}
