#include <stdio.h>
#include <stdlib.h>

void printavetor(int vetor[],int maximo) {
	int i;
	for (i=0; i<maximo; i++) {
			printf ("%d ", vetor[i]);
	}
}
main() {
	int vetorpar[50],vetorimpar[50], i,Npar=0,Nimpar=0,valor;
	
	for (i=0; i<50; i++) {
		printf ("Digite o Valor %d do Vetor: ", i);
		scanf ("%d",&valor);
		if(valor%2==0){
			vetorpar[Npar] = valor;
			Npar++;
		}else{
			vetorimpar[Nimpar] = valor;
			Nimpar++;
		}
	}
	printf ("\nVetor Par:\n");
	printavetor(vetorpar,Npar);
	printf ("\nVetor Impar:\n");
	printavetor(vetorimpar,Nimpar);
	system ("pause");
}

