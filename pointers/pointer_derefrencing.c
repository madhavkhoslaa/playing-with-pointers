#import <stdio.h>

void main(){
	int a = 10;
	int* p;
	p=&a;
	printf("The address is %d and the value is %d",p,*p);

}
