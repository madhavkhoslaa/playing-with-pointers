#include <stdio.h>
#include <string.h>

void print_str(char c[]){
	int i=0;
	while(c[i] != '\0'){
	printf("%c", c[i]);
	i++;
	}
}

void print_pointer(char* x){
	while(*x !='\0'){
		printf("%c", *x);
		x+=1;

	}



}

void main(){
	char c[] = "Blah Blah";
	char* p;
	p=c;

	print_pointer(c);


}

