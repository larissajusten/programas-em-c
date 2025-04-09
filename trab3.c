#include <stdio.h>
#include <stdlib.h>

int pegamatriz(int matriz[][4]) {
	int i,j;
	
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			printf("Digite um numero [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void somavalor(int matrizz[][4])
{
	int a=0,i;
	for (i=0;i<4;i++){
		a += matrizz[i][i];
	}
	printf ("%d ", a);
}

int main(){
	int matriz[4][4];
	
	pegamatriz(matriz);
	somavalor(matriz);
	system ("pause");
}

