#include <stdio.h>

void main(){
	int a[3][3];
	int* p[3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			a[i][j] = rand();
		}
	}
	for(int k=0; k<3; k++){
		for(int l=0 ; l<3; l++){
			printf("%d ", a[k][l]);
				}
		printf("\n");
		}
	}

