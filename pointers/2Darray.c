#include <stdio.h>
const int M =3;
const int N =3;

void printma(int a[M][N]){
	for(int k=0; k<M; k++){
		for(int l=0 ; l<N; l++){
			printf("%d ", a[k][l]);
		}
		printf("\n");
		}
}

void main(){
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printma(&a);
	int* p;
	p=a;
	printf("%d a[2][3]", *((a[2])+3));

}

