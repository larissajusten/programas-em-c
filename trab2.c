#include <stdio.h>
#include <stdlib.h>

int pegamatriz(int matriz[][3]) {
	int i,j;
	
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite um numero [%d][%d]: ",i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void soma(int matriz[][3]){
	int i,a=0,b=0,c=0;
	for (i=0;i<3;i++){
		a +=matriz[i][0];
		b +=matriz[i][1];
		c +=matriz[i][2];
	}
	
	printf("%d ",a);
	printf("%d ",b);
	printf("%d ",c);	
}

int main(){
	int matriz [3][3];
	
	pegamatriz(matriz);
	soma(matriz);
	system ("pause");
}
