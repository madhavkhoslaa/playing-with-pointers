#include <stdio.h>

void main(){
	int a=1025;
	int* p;
	p=&a;
	printf("\nAddress is %p and the value is %d", p, *p);
	char* p0;
	printf("\n%d", sizeof(int));
	p0 = (void*)p;
	for(int i=0; i<sizeof(int); i++){
		printf("\n Value at address %d",*p0 );
		p0=p0+1;
	}
}
