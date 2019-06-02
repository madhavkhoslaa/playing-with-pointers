#include <stdio.h>

void main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* p;
	p=&a;
	printf("\n&a: %p\n", &a);
	printf("p*: %d p:%d",*p,p);
	for(int i=0; i<10; i++){
		printf("\nValue at index %d is %d and address is %p",i,*p,p);
		p=p+1;

	}

}
