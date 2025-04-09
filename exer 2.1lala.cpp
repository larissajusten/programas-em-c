#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// larissa - Algoritmos - Exerc 2

char sim; float imc_calculo;
void imc(float a, float b){
		imc_calculo=(b/(a*a));
	}
int main(){
     struct dados{
	char nome[40]; 
	char sexo[10];
	float altura;
	float peso;
	int cpf;
     };
struct dados pessoa;
do{
	printf("NOME: ");
	fflush(stdin);
	fgets(pessoa.nome,40,stdin);
	printf("SEXO: ");
	fflush(stdin);
	fgets(pessoa.sexo,10,stdin);
	printf("CPF: ");
	scanf("%d", &pessoa.cpf);
	printf("PESO: ");
	scanf("%f",&pessoa.peso);
	printf("ALTURA: ");
	scanf("%f",&pessoa.altura);
		printf("\nNOME: %s\nSEXO: %s\nCPF: %d",pessoa.nome,pessoa.sexo,pessoa.cpf);
		imc(pessoa.altura,pessoa.peso);
		printf("\nIMC: %.1f", imc_calculo);
		printf("\nDESEJA CALCULAR MAIS IMC: S/N  ");
    	scanf("%s",&sim);
    	printf("\n");
}
while (sim=='s');
}
