#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // larissa - Algoritmos - Exer 1
 
typedef struct{
	char nome[60];
	int sexo;
	int cpf;
	float peso, h, imc;
}pessoa;

main(){
	pessoa x[2];
	int i;
	for(i=0;i<2;i++){
		printf ("Digite o nome e o CPF: ");
		scanf("%s%d", x[i].nome, &x[i].cpf);
		printf ("Digite o seu peso e sua altura:  ");
		scanf ("%f%f", &x[i].peso, &x[i].h);
		printf ("Masculino - 1 Feminino - 2      ");
		scanf ("%d", &x[i].sexo);
  		x[i].imc=(x[i].peso)/(x[i].h*x[i].h);
	}
	
	for (i=0;i<2;i++){
		printf ("\n\nNome: %s     CPF: %d     IMC: %f", x[i].nome, x[i].cpf, x[i].imc);
	}
}
