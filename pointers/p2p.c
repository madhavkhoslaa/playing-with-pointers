#include <stdio.h>

void main(){
	int a = 99;
	int* p0;
	int** p1;
	int*** p2;
	p0=&a;
	p1=&p0;
	p2=&p1;
	printf("\n%d:*p0, %d: p0", *p0, p0);
	printf("\n%d: **p1, %d: *p1", **p1,*p1);


}
