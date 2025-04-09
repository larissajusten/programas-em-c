#include <stdio.h>
#include <stdlib.h>

int i,j;
int l,c;

int pegamatriz(int matriz[][3]) {
	int i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite um numero [%d][%d]: ",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void printamatriz(int matriz[][3]){
	int i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf ("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main() {		
	int i,j,matriz[3][3],transposta[3][3];
	
	pegamatriz(matriz);
	printf ("Matriz original:\n");
	printamatriz(matriz);
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			transposta[j][i] = matriz[i][j];
		}
	}			
	printf ("A matriz transposta e: \n");
	printamatriz(transposta);
	system ("pause");
}
